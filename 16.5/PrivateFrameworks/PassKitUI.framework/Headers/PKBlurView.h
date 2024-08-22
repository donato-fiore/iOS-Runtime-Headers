// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKBLURVIEW_H
#define PKBLURVIEW_H

@class UIView, CAFilter;



@interface PKBlurView : UIView {
    CAFilter *_filter;
}


@property (nonatomic) CGFloat blurRadius; // ivar: _blurRadius


-(BOOL)_shouldAnimatePropertyAdditivelyWithKey:(id)arg0 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;


@end


#endif