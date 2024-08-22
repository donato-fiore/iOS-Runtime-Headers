// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RMSTATUSPUBLISHERDESCRIPTION_H
#define RMSTATUSPUBLISHERDESCRIPTION_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface RMStatusPublisherDescription : NSObject

@property (readonly, copy, nonatomic) NSArray *statusKeys; // ivar: _statusKeys
@property (readonly, copy, nonatomic) NSDictionary *statusKeysByNotification; // ivar: _statusKeysByNotification


+(id)descriptionWithEventsDictionary:(id)arg0 ;
+(id)descriptionWithServiceDictionary:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithStatusKeysByNotification:(id)arg0 ;


@end


#endif