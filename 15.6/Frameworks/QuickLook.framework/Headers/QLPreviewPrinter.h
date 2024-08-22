// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QLPREVIEWPRINTER_H
#define QLPREVIEWPRINTER_H

@class UIPrintPageRenderer;
@protocol QLPrintingProtocol;



@interface QLPreviewPrinter : UIPrintPageRenderer

@property (readonly) NSObject<QLPrintingProtocol> *printer; // ivar: _printer


-(NSInteger)numberOfPages;
-(id)initWithPreviewPrinter:(id)arg0 ;
-(void)drawPageAtIndex:(NSInteger)arg0 inRect:(struct CGRect )arg1 ;
-(void)prepareForDrawingPages:(struct _NSRange )arg0 ;


@end


#endif