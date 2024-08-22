// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NCNOTIFICATIONLISTBASECONTENTVIEW_H
#define NCNOTIFICATIONLISTBASECONTENTVIEW_H

@class UIView, MTVisualStylingProvider, NSStringDrawingContext, NSString, NSArray;
@protocol MTVisualStylingProviding, MTVisualStylingRequiring, PLContentSizeCategoryAdjusting;



@interface NCNotificationListBaseContentView : UIView <MTVisualStylingProviding, MTVisualStylingRequiring, PLContentSizeCategoryAdjusting>

 {
    MTVisualStylingProvider *_strokeVisualStylingProvider;
    NSStringDrawingContext *_drawingContext;
}


@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // ivar: _adjustsFontForContentSizeCategory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *preferredContentSizeCategory; // ivar: _preferredContentSizeCategory
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property (readonly) Class superclass;


-(BOOL)adjustForContentSizeCategoryChange;
-(CGFloat)_sizeMeasuringHeightForLabel:(id)arg0 withNumberOfLines:(NSUInteger)arg1 ;
-(NSUInteger)_numberOfLinesForLabel:(id)arg0 maximumNumberOfLines:(NSUInteger)arg1 inFrame:(struct CGRect )arg2 ;
-(id)_preferredFont:(BOOL)arg0 textStyle:(id)arg1 weight:(CGFloat)arg2 additionalTraits:(unsigned int)arg3 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)visualStylingProviderForCategory:(NSInteger)arg0 ;
-(void)_updateTextAttributes;
-(void)_updateTextAttributesForLabel:(id)arg0 withTextStyle:(id)arg1 fontWeight:(CGFloat)arg2 additionalTraits:(unsigned int)arg3 maximumNumberOfLines:(NSUInteger)arg4 ;
-(void)_updateVisualStylingOfImageView:(id)arg0 ifSymbolImageWithStyle:(NSInteger)arg1 visualStylingProvider:(id)arg2 outgoingProvider:(id)arg3 ;
-(void)_updateVisualStylingOfView:(id)arg0 style:(NSInteger)arg1 visualStylingProvider:(id)arg2 outgoingProvider:(id)arg3 ;
-(void)_visualStylingProviderDidChange:(id)arg0 forCategory:(NSInteger)arg1 outgoingProvider:(id)arg2 ;
-(void)didMoveToWindow;
-(void)setVisualStylingProvider:(id)arg0 forCategory:(NSInteger)arg1 ;


@end


#endif