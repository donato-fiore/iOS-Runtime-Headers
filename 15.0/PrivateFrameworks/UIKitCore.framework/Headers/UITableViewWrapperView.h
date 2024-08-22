// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UITABLEVIEWWRAPPERVIEW_H
#define UITABLEVIEWWRAPPERVIEW_H

@class NSArray;


#import "UIScrollView.h"

@interface UITableViewWrapperView : UIScrollView

@property (readonly, nonatomic) NSArray *stuckToBackViews; // ivar: _stuckToBackViews


-(BOOL)_forwardsToParentScroller;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_addSubview:(id)arg0 positioned:(NSInteger)arg1 relativeTo:(id)arg2 ;
-(void)_stickViewToBack:(id)arg0 ;
-(void)_unstickView:(id)arg0 ;
-(void)bringSubviewToFront:(id)arg0 ;
-(void)dealloc;
-(void)sendSubviewToBack:(id)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)willRemoveSubview:(id)arg0 ;


@end


#endif