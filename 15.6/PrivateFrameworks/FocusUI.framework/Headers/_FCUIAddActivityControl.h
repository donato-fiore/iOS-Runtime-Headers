// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _FCUIADDACTIVITYCONTROL_H
#define _FCUIADDACTIVITYCONTROL_H

@class UIControl, MTMaterialView, UIImageView, NSString;
@protocol FCUIContentSizeCategoryAdjusting, MTVisualStylingProviding, UIPointerInteractionDelegate;



@interface _FCUIAddActivityControl : UIControl <FCUIContentSizeCategoryAdjusting, MTVisualStylingProviding, UIPointerInteractionDelegate>

 {
    MTMaterialView *_backgroundMaterialView;
    UIImageView *_glyphImageView;
}


@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // ivar: _adjustsFontForContentSizeCategory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *preferredContentSizeCategory; // ivar: _preferredContentSizeCategory
@property (readonly) Class superclass;


-(BOOL)adjustForContentSizeCategoryChange;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)initWithAction:(id)arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(id)visualStylingProviderForCategory:(NSInteger)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureBackgroundMaterialViewIfNecesssary;
-(void)_configureGlyphImageViewIfNecessary;
-(void)layoutSubviews;


@end


#endif