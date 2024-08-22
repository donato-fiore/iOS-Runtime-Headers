// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUFEEDCELL_H
#define PUFEEDCELL_H

@class UICollectionViewCell, UITapGestureRecognizer, NSString, NSIndexPath;
@protocol UIGestureRecognizerDelegate, PUFeedCellDelegate;



@interface PUFeedCell : UICollectionViewCell <UIGestureRecognizerDelegate>



@property (retain, nonatomic, setter=_setTapGestureRecognizer:) UITapGestureRecognizer *_tapGestureRecognizer; // ivar: __tapGestureRecognizer
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PUFeedCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) CGPoint edgeParallaxOffset; // ivar: _edgeParallaxOffset
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSIndexPath *indexPath; // ivar: _indexPath
@property (nonatomic) CGPoint parallaxOffset; // ivar: _parallaxOffset
@property (retain, nonatomic) NSString *representedElementKind; // ivar: _representedElementKind
@property (readonly) Class superclass;
@property (nonatomic, getter=isTappable) BOOL tappable; // ivar: _tappable


+(struct CGRect )rectWithAspectRatio:(CGFloat)arg0 fillingRect:(struct CGRect )arg1 parallaxOffset:(struct CGPoint )arg2 edgeParallaxOffset:(struct CGPoint )arg3 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)shouldRecognizerTap:(id)arg0 ;
-(void)_handleTap:(id)arg0 ;
-(void)_updateTapGestureRecognizer;
-(void)applyLayoutAttributes:(id)arg0 ;
-(void)dealloc;


@end


#endif