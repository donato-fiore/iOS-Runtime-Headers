// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AATRUSTEDCONTACTFLOWPRESENTER_H
#define AATRUSTEDCONTACTFLOWPRESENTER_H

@class NSString;
@protocol TrustedContactFlowPresenterProtocol;


#import "AAFlowPresenter.h"

@interface AATrustedContactFlowPresenter : AAFlowPresenter <TrustedContactFlowPresenterProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)dealloc;
-(void)presentInvitationUIWithCustodianshipInfo:(id)arg0 completion:(id)arg1 ;
-(void)presentModel:(id)arg0 completion:(id)arg1 ;


@end


#endif