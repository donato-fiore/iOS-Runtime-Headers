// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef XBAPPLICATIONSNAPSHOTGENERATIONCONTEXT_H
#define XBAPPLICATIONSNAPSHOTGENERATIONCONTEXT_H

@class NSString;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>

#import "XBApplicationLaunchCompatibilityInfo.h"
#import "XBLaunchStateRequest.h"

@interface XBApplicationSnapshotGenerationContext : NSObject <BSDescriptionProviding>



@property (readonly, nonatomic) XBApplicationLaunchCompatibilityInfo *applicationCompatibilityInfo; // ivar: _applicationCompatibilityInfo
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) XBLaunchStateRequest *launchRequest; // ivar: _launchRequest
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat timeout; // ivar: _timeout


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithApplicationCompatibilityInfo:(id)arg0 launchRequest:(id)arg1 timeout:(CGFloat)arg2 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif