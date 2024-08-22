// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFPRINTPAGERENDERER_H
#define SFPRINTPAGERENDERER_H

@class UIPrintPageRenderer, NSNumberFormatter, NSString, UIFont, UIColor, UIPrintFormatter;
@protocol UIPrintInteractionControllerDelegate, SFPrintPageRendererDelegate;



@interface SFPrintPageRenderer : UIPrintPageRenderer <UIPrintInteractionControllerDelegate>

 {
    NSNumberFormatter *_numberFormatter;
    CGFloat _URLWidth;
    NSString *_dateString;
    CGFloat _dateWidth;
    CGFloat _printWidth;
    CGPoint _contentOffset;
    CGPoint _footerOffset;
    UIFont *_footerFont;
    UIColor *_footerColor;
}


@property (retain, nonatomic) NSString *URLString; // ivar: _URLString
@property (retain, nonatomic) UIPrintFormatter *contentFormatter; // ivar: _contentFormatter
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SFPrintPageRendererDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL printFooter; // ivar: _printFooter
@property (readonly) Class superclass;


-(id)init;
-(id)printInteractionControllerParentViewController:(id)arg0 ;
-(void)drawFooterForPageAtIndex:(NSInteger)arg0 inRect:(struct CGRect )arg1 ;
-(void)printInteractionControllerDidFinishJob:(id)arg0 ;
-(void)printInteractionControllerWillStartJob:(id)arg0 ;


@end


#endif