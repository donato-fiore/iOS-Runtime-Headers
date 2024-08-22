// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MEDIACONTROLSMATERIALVIEW_H
#define MEDIACONTROLSMATERIALVIEW_H

@class UIView, NSString;
@protocol MTVisualStylingProviding;



@interface MediaControlsMaterialView : UIView <MTVisualStylingProviding>

 {
    UIView *_backgroundView;
    UIView *_highlightView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: _highlighted
@property (readonly) Class superclass;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)visualStylingProviderForCategory:(NSInteger)arg0 ;
-(void)_setContinuousCornerRadius:(CGFloat)arg0 ;
-(void)layoutSubviews;


@end


#endif