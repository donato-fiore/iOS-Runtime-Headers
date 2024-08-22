// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUGRIDSECTIONHEADERVIEW_H
#define HUGRIDSECTIONHEADERVIEW_H

@class UICollectionViewListCell, UIImageView, NSString, NSArray, UIListContentView, UILongPressGestureRecognizer, UITapGestureRecognizer;
@protocol UIGestureRecognizerDelegate;



@interface HUGridSectionHeaderView : UICollectionViewListCell <UIGestureRecognizerDelegate>



@property (copy, nonatomic) id *actionHandler; // ivar: _actionHandler
@property (retain, nonatomic) UIImageView *chevronView; // ivar: _chevronView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *layoutConstraints; // ivar: _layoutConstraints
@property (retain, nonatomic) UIListContentView *listContentView; // ivar: _listContentView
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // ivar: _longPressGestureRecognizer
@property (nonatomic) BOOL showsDisclosureIndicator; // ivar: _showsDisclosureIndicator
@property (readonly) Class superclass;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer


+(BOOL)requiresConstraintBasedLayout;
+(id)reuseIdentifier;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_didRecognizeLongPressGesture:(id)arg0 ;
-(void)_didRecognizeTapGesture:(id)arg0 ;
-(void)_installGestureRecognizers;
-(void)_uninstallGestureRecognizers;
-(void)dealloc;
-(void)prepareForReuse;
-(void)setContentConfiguration:(id)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)updateConstraints;


@end


#endif