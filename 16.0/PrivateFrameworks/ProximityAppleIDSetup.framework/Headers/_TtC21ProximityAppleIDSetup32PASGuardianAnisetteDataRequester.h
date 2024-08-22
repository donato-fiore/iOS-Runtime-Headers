// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC21PROXIMITYAPPLEIDSETUP32PASGUARDIANANISETTEDATAREQUESTER_H
#define _TTC21PROXIMITYAPPLEIDSETUP32PASGUARDIANANISETTEDATAREQUESTER_H

@class SwiftNativeNSObject;
@protocol AKAnisetteServiceProtocol;



@interface _TtC21ProximityAppleIDSetup32PASGuardianAnisetteDataRequester : SwiftNativeNSObject <AKAnisetteServiceProtocol>

 {
    ? $defaultActor;
    ? messageSessionProvider;
}




-(?)eraseAnisetteWithCompletion;
-(?)fetchAnisetteDataAndProvisionIfNecessarywithCompletion;
-(?)fetchPeerAttestationDataForRequestcompletion;
-(?)legacyAnisetteDataForDSIDwithCompletion;
-(?)provisionAnisetteWithCompletion;
-(?)syncAnisetteWithSIMDatacompletion;
-(id)init;


@end


#endif