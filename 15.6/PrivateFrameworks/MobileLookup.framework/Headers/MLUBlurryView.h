// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLUBLURRYVIEW_H
#define MLUBLURRYVIEW_H

@class UIView;



@interface MLUBlurryView : UIView {
    BOOL _hasActivated;
}


@property CGFloat blurRadius;
@property (nonatomic) BOOL shouldRasterizeForTransition; // ivar: _shouldRasterizeForTransition


-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(void)_activateBlurring;


@end


#endif