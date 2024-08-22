// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QLPREVIEWITEMPRINTER_H
#define QLPREVIEWITEMPRINTER_H

@protocol OS_dispatch_queue, OS_dispatch_semaphore, QLPrintingProtocol;


#import "QLPreviewPrinter.h"
#import "QLItemPresenterViewController.h"

@interface QLPreviewItemPrinter : QLPreviewPrinter {
    NSObject<OS_dispatch_queue> *_accessPrinterQueue;
    NSObject<OS_dispatch_semaphore> *_waitForPrinterSemaphore;
    BOOL _didReceivePrinter;
}


@property (retain, nonatomic) NSObject<QLPrintingProtocol> *itemPrinter; // ivar: _itemPrinter
@property (retain, nonatomic) QLItemPresenterViewController *presenter; // ivar: _presenter


-(NSInteger)numberOfPages;
-(id)initWithItem:(id)arg0 ;
-(id)printer;
-(void)_didReceivePrinter:(id)arg0 ;
-(void)_waitForPrinterSynchronously;
-(void)drawPageAtIndex:(NSInteger)arg0 inRect:(struct CGRect )arg1 ;
-(void)prepareForDrawingPages:(struct _NSRange )arg0 ;


@end


#endif