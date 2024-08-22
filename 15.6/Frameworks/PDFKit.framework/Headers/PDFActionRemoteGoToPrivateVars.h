// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PDFACTIONREMOTEGOTOPRIVATEVARS_H
#define PDFACTIONREMOTEGOTOPRIVATEVARS_H

@class NSURL;

#import <Foundation/Foundation.h>

#import "PDFDestination.h"

@interface PDFActionRemoteGoToPrivateVars : NSObject {
    NSUInteger pageIndex;
    CGPoint point;
    NSURL *url;
    PDFDestination *destination;
}






@end


#endif