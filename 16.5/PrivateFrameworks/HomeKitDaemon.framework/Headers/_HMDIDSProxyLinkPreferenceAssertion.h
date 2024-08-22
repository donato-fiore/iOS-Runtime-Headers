// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HMDIDSPROXYLINKPREFERENCEASSERTION_H
#define _HMDIDSPROXYLINKPREFERENCEASSERTION_H

@class HMFObject;
@protocol HMDIDSService;



@interface _HMDIDSProxyLinkPreferenceAssertion : HMFObject

@property (readonly, nonatomic) NSObject<HMDIDSService> *proxyService; // ivar: _proxyService


-(id)initWithIDSProxyService:(id)arg0 ;
-(void)dealloc;


@end


#endif