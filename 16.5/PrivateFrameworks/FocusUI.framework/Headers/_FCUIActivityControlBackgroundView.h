// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _FCUIACTIVITYCONTROLBACKGROUNDVIEW_H
#define _FCUIACTIVITYCONTROLBACKGROUNDVIEW_H

@class UIView, NSString;
@protocol FCUIHighlighting;



@interface _FCUIActivityControlBackgroundView : UIView <FCUIHighlighting>

 {
    NSInteger _controlStyle;
    UIView *_highlightView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: _highlighted
@property (readonly) Class superclass;


-(id)initWithControlStyle:(NSInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_configureHighlightViewIfNecessary;
-(void)_setContinuousCornerRadius:(CGFloat)arg0 ;
-(void)_setCornerRadius:(CGFloat)arg0 ;


@end


#endif