// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIPRINTINFOREQUEST_H
#define UIPRINTINFOREQUEST_H

@class PKPrinter;

#import <Foundation/Foundation.h>


@interface UIPrintInfoRequest : NSObject {
    PKPrinter *_printer;
}


@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (nonatomic) int requestState; // ivar: _requestState


+(id)requestInfoForPrinter:(id)arg0 ;
-(void)requestPrintInfo;


@end


#endif