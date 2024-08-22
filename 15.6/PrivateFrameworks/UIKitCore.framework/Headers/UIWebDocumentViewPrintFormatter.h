// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIWEBDOCUMENTVIEWPRINTFORMATTER_H
#define UIWEBDOCUMENTVIEWPRINTFORMATTER_H

@class WebFrame;


#import "UIViewPrintFormatter.h"
#import "UIWebPaginationInfo.h"

@interface UIWebDocumentViewPrintFormatter : UIViewPrintFormatter {
    UIWebPaginationInfo *_paginationInfo;
}


@property (retain, nonatomic) WebFrame *frameToPrint; // ivar: _frameToPrint


-(NSInteger)_recalcPageCount;
-(id)_webDocumentView;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(struct CGRect )rectForPageAtIndex:(NSInteger)arg0 ;
-(void)_resetPaginationInfo;
-(void)drawInRect:(struct CGRect )arg0 forPageAtIndex:(NSInteger)arg1 ;
-(void)removeFromPrintPageRenderer;


@end


#endif