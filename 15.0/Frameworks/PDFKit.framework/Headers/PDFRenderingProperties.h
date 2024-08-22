// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PDFRENDERINGPROPERTIES_H
#define PDFRENDERINGPROPERTIES_H

@class UIColor, PDFLayerController;

#import <Foundation/Foundation.h>

#import "PDFRenderingPropertiesPrivate.h"
#import "PDFView.h"

@interface PDFRenderingProperties : NSObject {
    PDFRenderingPropertiesPrivate *_private;
}


@property (nonatomic) *CGColorSpace deviceColorSpace;
@property (nonatomic) NSInteger displayBox;
@property (nonatomic) BOOL enableBackgroundImages;
@property (nonatomic) BOOL enablePageShadows;
@property (nonatomic) BOOL enableTileUpdates;
@property (nonatomic) CGFloat greekingThreshold;
@property (nonatomic) NSInteger interpolationQuality;
@property (nonatomic) BOOL isUsingPDFExtensionView;
@property (nonatomic) CGFloat lineWidthThreshold;
@property (retain, nonatomic) UIColor *pageColor;
@property (weak, nonatomic, setter=setPDFLayerController:) PDFLayerController *pdfLayerController;
@property (weak, nonatomic, setter=setPDFView:) PDFView *pdfView;
@property (nonatomic) CGFloat screenScaleFactor;
@property (nonatomic) BOOL shouldAntiAlias;


-(id)init;
-(void)_notifyPropertyChanged:(NSInteger)arg0 ;
-(void)dealloc;


@end


#endif