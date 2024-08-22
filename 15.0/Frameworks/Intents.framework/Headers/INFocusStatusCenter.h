// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INFOCUSSTATUSCENTER_H
#define INFOCUSSTATUSCENTER_H

@class DNDAvailabilityService;

#import <Foundation/Foundation.h>

#import "INFocusStatus.h"

@interface INFocusStatusCenter : NSObject

@property (readonly, nonatomic) NSInteger authorizationStatus;
@property (readonly, nonatomic) INFocusStatus *focusStatus;
@property (readonly, nonatomic) DNDAvailabilityService *service; // ivar: _service


+(id)defaultCenter;
-(id)init;
-(void)requestAuthorizationWithCompletionHandler:(id)arg0 ;


@end


#endif