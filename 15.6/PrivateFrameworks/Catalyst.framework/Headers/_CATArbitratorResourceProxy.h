// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CATARBITRATORRESOURCEPROXY_H
#define _CATARBITRATORRESOURCEPROXY_H

@class NSProxy, NSString;
@protocol CATArbitratorProxy;


#import "_CATArbitratorRegistrationEntry.h"

@interface _CATArbitratorResourceProxy : NSProxy <CATArbitratorProxy>

 {
    id *mResource;
    _CATArbitratorRegistrationEntry *mRegistration;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isExclusive; // ivar: _isExclusive
@property (readonly) Class superclass;


-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithResource:(id)arg0 registration:(id)arg1 exclusive:(BOOL)arg2 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg0 ;
-(void)invalidate;


@end


#endif