// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CCUICONTENTMODULECONTAINERVIEW_H
#define CCUICONTENTMODULECONTAINERVIEW_H

@class UIView, NSArray, NSString;



@interface CCUIContentModuleContainerView : UIView {
    NSArray *_views;
    NSUInteger _options;
}


@property (readonly, nonatomic) UIView *c2AnimationContainerView;
@property (readonly, nonatomic) UIView *caAnimationContainerView;
@property (readonly, nonatomic) UIView *containerView;
@property (nonatomic) BOOL ignoreFrameUpdates; // ivar: _ignoreFrameUpdates
@property (readonly, copy, nonatomic) NSString *moduleIdentifier; // ivar: _moduleIdentifier


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithModuleIdentifier:(id)arg0 options:(NSUInteger)arg1 ;
-(void)layoutSubviews;


@end


#endif