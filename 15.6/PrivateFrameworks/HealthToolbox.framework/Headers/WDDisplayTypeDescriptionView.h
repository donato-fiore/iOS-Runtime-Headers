// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WDDISPLAYTYPEDESCRIPTIONVIEW_H
#define WDDISPLAYTYPEDESCRIPTIONVIEW_H

@class UIView, HKDisplayType, UILabel, UITextView, NSString;
@protocol UITextViewDelegate;



@interface WDDisplayTypeDescriptionView : UIView <UITextViewDelegate>

 {
    HKDisplayType *_displayType;
    NSUInteger _style;
    UILabel *_descriptionHeadingLabel;
    UILabel *_descriptionLabel;
    UITextView *_attributionTextView;
    UILabel *_cautionaryLabel;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL showAttributionText; // ivar: _showAttributionText
@property (readonly) Class superclass;


+(CGFloat)minimumHeightForStyle:(NSUInteger)arg0 ;
+(id)_attributionTextFontForStyle:(NSUInteger)arg0 ;
+(id)_cautionaryTextFontForStyle:(NSUInteger)arg0 ;
+(id)_descriptionHeadingColorForStyle:(NSUInteger)arg0 ;
+(id)_descriptionHeadingFontForStyle:(NSUInteger)arg0 ;
+(id)_descriptionTextColorForStyle:(NSUInteger)arg0 ;
+(id)_descriptionTextFontForStyle:(NSUInteger)arg0 ;
+(id)_metricsForStyle:(NSUInteger)arg0 ;
-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDisplayType:(id)arg0 showAttributionText:(BOOL)arg1 style:(NSUInteger)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setupUI;
-(void)_updateFont;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif