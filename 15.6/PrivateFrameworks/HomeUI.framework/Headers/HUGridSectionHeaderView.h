// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUGRIDSECTIONHEADERVIEW_H
#define HUGRIDSECTIONHEADERVIEW_H

@class UICollectionViewListCell, NSString, UILongPressGestureRecognizer, UITapGestureRecognizer;
@protocol UIGestureRecognizerDelegate;



@interface HUGridSectionHeaderView : UICollectionViewListCell <UIGestureRecognizerDelegate>



@property (copy, nonatomic) id *actionHandler; // ivar: _actionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // ivar: _longPressGestureRecognizer
@property (readonly) Class superclass;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer


+(id)reuseIdentifier;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_didRecognizeLongPressGesture:(id)arg0 ;
-(void)_didRecognizeTapGesture:(id)arg0 ;
-(void)_installGestureRecognizers;
-(void)_uninstallGestureRecognizers;
-(void)dealloc;
-(void)prepareForReuse;


@end


#endif