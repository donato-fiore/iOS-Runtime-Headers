// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACCIAP2SHIMSERVERUNREGISTEREDCLIENT_H
#define ACCIAP2SHIMSERVERUNREGISTEREDCLIENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ACCiAP2ShimServerUnregisteredClient : NSObject

@property (readonly, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, nonatomic) *SBSProcessAssertion processAssertion; // ivar: _processAssertion
@property (readonly, nonatomic) NSInteger processAssertionStartTime; // ivar: _processAssertionStartTime
@property (readonly, nonatomic) int processId; // ivar: _processId


-(id)_applicationInfoForBundleIDSync:(id)arg0 ;
-(id)initWithBundleId:(id)arg0 ;
-(int)_getProcessId;
-(void)releaseProcessAssertion;
-(void)takeProcessAssertion:(id)arg0 ;


@end


#endif