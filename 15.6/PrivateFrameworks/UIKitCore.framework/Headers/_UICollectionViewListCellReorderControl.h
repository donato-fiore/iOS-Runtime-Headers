// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICOLLECTIONVIEWLISTCELLREORDERCONTROL_H
#define _UICOLLECTIONVIEWLISTCELLREORDERCONTROL_H

@class NSString;
@protocol UIGestureRecognizerDelegate, UITableConstants, _UICollectionViewListCellReorderControlDelegate;


#import "UIControl.h"
#import "UIImageView.h"
#import "UILongPressGestureRecognizer.h"
#import "UIColor.h"

@interface _UICollectionViewListCellReorderControl : UIControl <UIGestureRecognizerDelegate>

 {
    UIImageView *_imageView;
    UILongPressGestureRecognizer *_reorderRecognizer;
    BOOL _tracking;
    BOOL _needsImageViewUpdate;
}


@property (retain, nonatomic) UIColor *accessoryTintColor; // ivar: _accessoryTintColor
@property (retain, nonatomic) NSObject<UITableConstants> *constants; // ivar: _constants
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_UICollectionViewListCellReorderControlDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 constants:(id)arg1 ;
-(struct CGSize )_minimumSizeForHitTesting;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_setNeedsImageViewUpdate;
-(void)_updateImageViewIfNeeded;
-(void)beginReordering;
-(void)endReordering:(BOOL)arg0 ;
-(void)gestureMovedToPoint:(struct CGPoint )arg0 ;
-(void)layoutSubviews;
-(void)pan:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif