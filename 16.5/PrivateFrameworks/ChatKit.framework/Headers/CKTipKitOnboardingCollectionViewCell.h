// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKTIPKITONBOARDINGCOLLECTIONVIEWCELL_H
#define CKTIPKITONBOARDINGCOLLECTIONVIEWCELL_H

@class NSMutableArray, NSString, NSArray, UIView, CAPackage, CALayer, CAStateController;
@protocol CNAvatarViewDelegate;


#import "CKTipKitCollectionViewCell.h"

@interface CKTipKitOnboardingCollectionViewCell : CKTipKitCollectionViewCell <CNAvatarViewDelegate>



@property (retain, nonatomic) NSMutableArray *avatarViews; // ivar: _avatarViews
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *layerNames; // ivar: _layerNames
@property (retain, nonatomic) UIView *micaView; // ivar: _micaView
@property (retain, nonatomic) CAPackage *package; // ivar: _package
@property (retain, nonatomic) CALayer *packageLayer; // ivar: _packageLayer
@property (retain, nonatomic) NSArray *recommendedPinningConversations; // ivar: _recommendedPinningConversations
@property (nonatomic) NSInteger state; // ivar: _state
@property (retain, nonatomic) CAStateController *stateController; // ivar: _stateController
@property (readonly) Class superclass;


+(id)reuseIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)presentingViewControllerForAvatarView:(id)arg0 ;
-(void)dealloc;
-(void)didEndDisplaying;
-(void)didUpdateContentForAvatarView:(id)arg0 ;
-(void)prepareForReuse;
-(void)resetViews;
-(void)setTipContentView:(id)arg0 withRecommenedPinningConversations:(id)arg1 ;
-(void)startAnimations;
-(void)stepThroughOnboardingTipAnimationForLayer:(id)arg0 ;
-(void)stopAnimations;
-(void)updateTipAnimationIfNeeded;
-(void)willDisplayCell;


@end


#endif