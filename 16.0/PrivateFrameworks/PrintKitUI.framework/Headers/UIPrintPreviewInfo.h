// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIPRINTPREVIEWINFO_H
#define UIPRINTPREVIEWINFO_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "UIPrintInfo.h"
#import "UIPrintPaper.h"

@interface UIPrintPreviewInfo : NSObject

@property (retain) UIPrintInfo *activePrintInfo; // ivar: _activePrintInfo
@property BOOL canShowLayout; // ivar: _canShowLayout
@property BOOL deepColor; // ivar: _deepColor
@property (retain) UIPrintPaper *destinationPaper; // ivar: _destinationPaper
@property CGSize destinationViewSize; // ivar: _destinationViewSize
@property BOOL grayscale; // ivar: _grayscale
@property (retain) NSArray *pageRanges; // ivar: _pageRanges
@property (retain) NSString *pdfPassword; // ivar: _pdfPassword
@property BOOL printPDFAnnotations; // ivar: _printPDFAnnotations
@property (retain) UIPrintPaper *printPaper; // ivar: _printPaper
@property BOOL scaleUpOnDestinationPaper; // ivar: _scaleUpOnDestinationPaper
@property BOOL showPageRange; // ivar: _showPageRange


-(id)init;


@end


#endif