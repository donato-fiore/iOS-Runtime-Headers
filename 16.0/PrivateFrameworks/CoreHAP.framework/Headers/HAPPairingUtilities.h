// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HAPPAIRINGUTILITIES_H
#define HAPPAIRINGUTILITIES_H

@class HMFObject;



@interface HAPPairingUtilities : HMFObject



+(BOOL)parseAddPairingResponse:(id)arg0 error:(*id)arg1 ;
+(BOOL)parseRemovePairingResponse:(id)arg0 error:(*id)arg1 ;
+(id)createAddPairingRequestForPairingIdentity:(id)arg0 error:(*id)arg1 ;
+(id)createListPairingsRequest:(*id)arg0 ;
+(id)createRemovePairingRequestForPairingIdentity:(id)arg0 error:(*id)arg1 ;
+(id)parseListPairingsResponse:(id)arg0 error:(*id)arg1 ;


@end


#endif