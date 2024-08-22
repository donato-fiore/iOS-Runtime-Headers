// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DKNOTABLEUSERDATAWALLETCARDVIEW_H
#define DKNOTABLEUSERDATAWALLETCARDVIEW_H

@class NSString, NSMutableDictionary;
@protocol PKPaymentSetupAssistantProvisioningContextDelegate;


#import "DKNotableUserDataCardView.h"

@interface DKNotableUserDataWalletCardView : DKNotableUserDataCardView <PKPaymentSetupAssistantProvisioningContextDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableDictionary *featureCardCellMap; // ivar: _featureCardCellMap
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 icon:(id)arg2 ;
-(struct CGSize )setupAssistantCredentialCardArtSize;
-(void)addCardCell:(id)arg0 ;
-(void)setupAssistantCredentialUpdatedCardArt:(id)arg0 ;


@end


#endif