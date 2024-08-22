// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSNOTIFICATIONSETTINGSRESULT_H
#define AMSNOTIFICATIONSETTINGSRESULT_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface AMSNotificationSettingsResult : NSObject

@property (readonly, nonatomic) NSArray *sections; // ivar: _sections


+(id)_sectionsFromDictionaryRepresentation:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;


@end


#endif