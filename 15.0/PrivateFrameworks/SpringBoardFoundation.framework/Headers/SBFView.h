// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFVIEW_H
#define SBFVIEW_H

@class UIView, NSArray;



@interface SBFView : UIView

@property (copy, nonatomic) NSArray *animatedLayerProperties; // ivar: _animatedLayerProperties
@property (copy, nonatomic) id *didMoveToWindowHandler; // ivar: _didMoveToWindowHandler
@property (nonatomic) CGSize intrinsicContentSize; // ivar: _intrinsicContentSize


-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(void)didMoveToWindow;


@end


#endif