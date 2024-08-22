// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKEFFECTPREVIEWCOLLECTIONVIEWCONTROLLER_H
#define CKEFFECTPREVIEWCOLLECTIONVIEWCONTROLLER_H

@class UIViewController, NSTimer, UIView, NSString;
@protocol CKEffectPreviewCollectionViewControllerDelegate;


#import "CKMomentCollectionViewCell.h"
#import "CKFullScreenEffect.h"
#import "CKFullScreenEffectManager.h"

@interface CKEffectPreviewCollectionViewController : UIViewController

@property (retain, nonatomic) NSTimer *animationTimer; // ivar: _animationTimer
@property (retain, nonatomic) UIView *cellWrapper; // ivar: _cellWrapper
@property (retain, nonatomic) CKMomentCollectionViewCell *currentCell; // ivar: _currentCell
@property (weak, nonatomic) CKFullScreenEffect *currentEffect; // ivar: _currentEffect
@property (weak, nonatomic) NSObject<CKEffectPreviewCollectionViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) CKFullScreenEffectManager *fsem; // ivar: _fsem
@property (nonatomic) BOOL hideEffects; // ivar: _hideEffects
@property (retain, nonatomic) NSString *resizingSavedIdentifier; // ivar: _resizingSavedIdentifier


-(id)init;
-(void)addAnimationTimerForCell:(id)arg0 ;
-(void)dealloc;
-(void)displayEffectWithIdentifier:(id)arg0 ;
-(void)loadView;
-(void)resumeEffect;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif