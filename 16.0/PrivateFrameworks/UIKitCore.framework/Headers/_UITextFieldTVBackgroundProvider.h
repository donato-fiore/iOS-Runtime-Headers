// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UITEXTFIELDTVBACKGROUNDPROVIDER_H
#define _UITEXTFIELDTVBACKGROUNDPROVIDER_H

@class UITextFieldViewBackgroundProvider, NSString;
@protocol _UITextFieldMetricsProvider;



@interface _UITextFieldTVBackgroundProvider : UITextFieldViewBackgroundProvider <_UITextFieldMetricsProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat naturalHeight;
@property (readonly, nonatomic) BOOL shouldExtendCaretHeight;
@property (readonly) Class superclass;


-(NSInteger)associatedBorderStyle;
-(id)backgroundView;
-(id)preferredMetricsProvider;
-(struct CGRect )contentFrameForBounds:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicSizeForContentSize:(struct CGSize )arg0 ;


@end


#endif