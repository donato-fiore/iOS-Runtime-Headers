// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9COREIDVUI52CIDVUIINTERNALIDENTITYPROOFINGDATASHARINGFLOWMANAGER_H
#define _TTC9COREIDVUI52CIDVUIINTERNALIDENTITYPROOFINGDATASHARINGFLOWMANAGER_H


#import <Foundation/Foundation.h>


@interface _TtC9CoreIDVUI52CIDVUIInternalIdentityProofingDataSharingFlowManager : NSObject {
    ? dataSharingFlowManager;
}




-(id)init;
-(void)checkUserConsent:(id)arg0 ;
-(void)didChangeUserConsent:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)fetchUserConsent:(id)arg0 ;


@end


#endif