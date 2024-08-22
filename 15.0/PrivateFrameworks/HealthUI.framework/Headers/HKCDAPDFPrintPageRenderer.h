// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKCDAPDFPRINTPAGERENDERER_H
#define HKCDAPDFPRINTPAGERENDERER_H

@class UIPrintPageRenderer;



@interface HKCDAPDFPrintPageRenderer : UIPrintPageRenderer {
    CGRect _paperRectOverride;
    CGRect _printableRectOverride;
}




-(id)initWithPaperRect:(struct CGRect )arg0 horizontalMargin:(CGFloat)arg1 verticalMargin:(CGFloat)arg2 ;
-(struct CGRect )paperRect;
-(struct CGRect )printableRect;
-(void)drawFooterForPageAtIndex:(NSInteger)arg0 inRect:(struct CGRect )arg1 ;


@end


#endif