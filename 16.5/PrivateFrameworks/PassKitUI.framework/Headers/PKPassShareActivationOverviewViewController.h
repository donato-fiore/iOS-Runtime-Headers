// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPASSSHAREACTIVATIONOVERVIEWVIEWCONTROLLER_H
#define PKPASSSHAREACTIVATIONOVERVIEWVIEWCONTROLLER_H

@class UIViewController, PKPassShareActivationOptions, PKContact, UIView, NSString;
@protocol PKPassShareActivationShareActivationCodeViewDelegate, PKPassShareActivationExternalKeyEducationViewDelegate, PKPassShareActivationOverviewViewControllerDelegate;


#import "PKCollapsibleHeaderView.h"

@interface PKPassShareActivationOverviewViewController : UIViewController <PKPassShareActivationShareActivationCodeViewDelegate, PKPassShareActivationExternalKeyEducationViewDelegate>

 {
    PKPassShareActivationOptions *_activationOptions;
    PKContact *_recipient;
    BOOL _isFinalScreen;
    id<PKPassShareActivationOverviewViewControllerDelegate> *_delegate;
    PKCollapsibleHeaderView *_headerView;
    UIView *_contentView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithActivationOptions:(id)arg0 recipient:(id)arg1 isFinalScreen:(BOOL)arg2 delegate:(id)arg3 ;
-(void)closeButtonPressed;
-(void)externalKeyEdicationViewDidSelectNext:(id)arg0 ;
-(void)loadView;
-(void)shareActivationCodeViewDidSelectCopy:(id)arg0 ;
-(void)shareActivationCodeViewDidSelectPhone:(id)arg0 ;
-(void)shareActivationCodeViewDidSelectShare:(id)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif