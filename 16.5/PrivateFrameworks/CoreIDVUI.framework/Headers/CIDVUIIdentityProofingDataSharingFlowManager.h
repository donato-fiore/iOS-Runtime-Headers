// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CIDVUIIDENTITYPROOFINGDATASHARINGFLOWMANAGER_H
#define CIDVUIIDENTITYPROOFINGDATASHARINGFLOWMANAGER_H


#import <Foundation/Foundation.h>

#import "_TtC9CoreIDVUI52CIDVUIInternalIdentityProofingDataSharingFlowManager.h"

@interface CIDVUIIdentityProofingDataSharingFlowManager : NSObject

@property (retain, nonatomic) _TtC9CoreIDVUI52CIDVUIInternalIdentityProofingDataSharingFlowManager *dataSharingManager; // ivar: _dataSharingManager


-(id)init;
-(void)checkUserConsent:(id)arg0 ;
-(void)didChangeUserConsent:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)fetchUserConsent:(id)arg0 ;


@end


#endif