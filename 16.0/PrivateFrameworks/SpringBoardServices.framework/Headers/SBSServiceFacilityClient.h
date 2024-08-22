// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSSERVICEFACILITYCLIENT_H
#define SBSSERVICEFACILITYCLIENT_H

@class FBSServiceFacilityClient;



@interface SBSServiceFacilityClient : FBSServiceFacilityClient {
    NSInteger _numberOfCheckOuts;
}




+(id)checkOutClientWithClass:(Class)arg0 ;
+(id)serviceFacilityIdentifier;
+(void)checkInClient:(id)arg0 ;
-(BOOL)_decrementCheckout;
-(id)initWithCalloutQueue:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 calloutQueue:(id)arg1 ;
-(void)_incrementCheckout;


@end


#endif