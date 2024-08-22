// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIGRAPHICSPDFRENDERERFORMAT_H
#define UIGRAPHICSPDFRENDERERFORMAT_H

@class NSDictionary, NSURL, NSMutableData;


#import "UIGraphicsRendererFormat.h"

@interface UIGraphicsPDFRendererFormat : UIGraphicsRendererFormat

@property (copy, nonatomic) NSDictionary *documentInfo; // ivar: _documentInfo
@property (retain) NSURL *outputURL; // ivar: _outputURL
@property (retain) NSMutableData *pdfData; // ivar: _pdfData


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif