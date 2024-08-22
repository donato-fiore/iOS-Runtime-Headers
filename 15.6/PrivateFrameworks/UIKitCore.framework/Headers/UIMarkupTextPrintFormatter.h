// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIMARKUPTEXTPRINTFORMATTER_H
#define UIMARKUPTEXTPRINTFORMATTER_H

@class NSString;


#import "UIPrintFormatter.h"
#import "UIWebDocumentView.h"
#import "UIWebPaginationInfo.h"

@interface UIMarkupTextPrintFormatter : UIPrintFormatter {
    UIWebDocumentView *_webDocumentView;
    UIWebPaginationInfo *_paginationInfo;
}


@property (copy, nonatomic) NSString *markupText; // ivar: _markupText


-(NSInteger)_recalcPageCount;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithMarkupText:(id)arg0 ;
-(struct CGRect )rectForPageAtIndex:(NSInteger)arg0 ;
-(void)_resetPaginationInfo;
-(void)dealloc;
-(void)drawInRect:(struct CGRect )arg0 forPageAtIndex:(NSInteger)arg1 ;
-(void)removeFromPrintPageRenderer;


@end


#endif