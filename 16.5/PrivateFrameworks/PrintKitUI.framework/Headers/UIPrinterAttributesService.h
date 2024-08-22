// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIPRINTERATTRIBUTESSERVICE_H
#define UIPRINTERATTRIBUTESSERVICE_H

@class PKPrinter;

#import <Foundation/Foundation.h>


@interface UIPrinterAttributesService : NSObject {
    NSInteger _printerWarningPollTime;
    PKPrinter *_printer;
    id *_completionHandler;
}




+(id)instance;
-(id)init;
-(void)dealloc;
-(void)pollForPrinterWarningStatus;
-(void)startPollForPrinterWarningStatus:(id)arg0 completionHandler:(id)arg1 ;
-(void)stopPrinterWarningPolling;


@end


#endif