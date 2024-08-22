// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INTENTSAPP_H
#define INTENTSAPP_H

@class NSString;

#import <Foundation/Foundation.h>


@interface IntentsApp : NSObject

@property (readonly, nonatomic) BOOL accessGranted; // ivar: _accessGranted
@property (readonly, copy, nonatomic) NSString *appID; // ivar: _appID
@property (readonly, copy, nonatomic) NSString *displayName; // ivar: _displayName


-(NSInteger)compareWithIntentsApp:(id)arg0 ;
-(id)initWithAppId:(id)arg0 displayName:(id)arg1 accessGranted:(BOOL)arg2 ;


@end


#endif