// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPASSSHAREREDEMPTIONACTIVATIONCODESECTIONCONTROLLER_H
#define PKPASSSHAREREDEMPTIONACTIVATIONCODESECTIONCONTROLLER_H

@class PKPassShareActivationOptions, NSString;
@protocol PKTextFieldCollectionViewListCellDelegate, PKPassShareRedemptionActivationCodeSectionControllerDelegate;


#import "PKPassShareSectionController.h"

@interface PKPassShareRedemptionActivationCodeSectionController : PKPassShareSectionController <PKTextFieldCollectionViewListCellDelegate>

 {
    NSUInteger _mode;
    id<PKPassShareRedemptionActivationCodeSectionControllerDelegate> *_delegate;
}


@property (retain, nonatomic) PKPassShareActivationOptions *activationOptions; // ivar: _activationOptions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *enteredActivationCode; // ivar: _enteredActivationCode
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL requiresActivationCode; // ivar: _requiresActivationCode
@property (readonly) Class superclass;


-(BOOL)textFieldShouldReturn:(id)arg0 forListCell:(id)arg1 ;
-(id)init;
-(id)initWithMode:(NSUInteger)arg0 delegate:(id)arg1 ;
-(void)_endEditing;
-(void)decorateListCell:(id)arg0 forRowItem:(id)arg1 ;
-(void)didSelectItem:(id)arg0 ;
-(void)reloadItemsAnimated:(BOOL)arg0 ;
-(void)textFieldDidBeginEditing:(id)arg0 forListCell:(id)arg1 ;


@end


#endif