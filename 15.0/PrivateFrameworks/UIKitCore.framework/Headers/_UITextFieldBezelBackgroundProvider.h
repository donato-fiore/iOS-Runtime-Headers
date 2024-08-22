// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UITEXTFIELDBEZELBACKGROUNDPROVIDER_H
#define _UITEXTFIELDBEZELBACKGROUNDPROVIDER_H

@class UITextFieldDrawingBackgroundProvider;



@interface _UITextFieldBezelBackgroundProvider : UITextFieldDrawingBackgroundProvider



+(id)bezelStyleMetricsProvider;
-(NSInteger)associatedBorderStyle;
-(id)preferredMetricsProvider;
-(void)addToTextField:(id)arg0 ;
-(void)drawInBounds:(struct CGRect )arg0 ;
-(void)enabledDidChangeAnimated:(BOOL)arg0 ;


@end


#endif