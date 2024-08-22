// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9COREIDVUI34IDENTITYPROOFINGCONNECTIONPROVIDER_H
#define _TTC9COREIDVUI34IDENTITYPROOFINGCONNECTIONPROVIDER_H

@class SwiftObject;
@protocol _TtP13CoreIDVShared40IdentityManagementExportedClientProtocol_;



@interface _TtC9CoreIDVUI34IdentityProofingConnectionProvider : SwiftObject <_TtP13CoreIDVShared40IdentityManagementExportedClientProtocol_>

 {
    ? connection;
    ? proofingFlowManager;
}




-(void)didChangeProofingStatus;


@end


#endif