// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TDPHOTOSHOPELEMENTPRODUCTION_H
#define TDPHOTOSHOPELEMENTPRODUCTION_H

@class NSMutableAttributedString, CUIPSDImageRef, NSDate, CUIImage;
@protocol TDElementAttributes;


#import "TDElementProduction.h"
#import "TDPhotoshopAsset.h"

@interface TDPhotoshopElementProduction : TDElementProduction <TDElementAttributes>

 {
    NSMutableAttributedString *log;
    CUIPSDImageRef *psdImageRef;
    NSDate *_cachedImageDate;
    CUIImage *_edgeMetricsMask;
    CUIImage *_textMetricsMask;
    CUIImage *_baselineMetricsMask;
    CUIImage *_auxiliary1MetricsMask;
    CUIImage *_auxiliary2MetricsMask;
    BOOL _didCheckForMetricsMasks;
}


@property (retain, nonatomic) TDPhotoshopAsset *asset;


+(unsigned int)sliceColumnsPerRendition:(NSInteger)arg0 ;
+(unsigned int)sliceRowsPerRendition:(NSInteger)arg0 ;
-(BOOL)generateRenditionsWithEntityName:(id)arg0 document:(id)arg1 errorDescription:(*id)arg2 ;
-(id)_layerMappingForPhotoshopLayer:(NSInteger)arg0 drawingLayer:(NSInteger)arg1 ;
-(id)associatedFileURLWithDocument:(id)arg0 ;
-(id)auxiliary1MetricsMaskWithDocument:(id)arg0 ;
-(id)auxiliary2MetricsMaskWithDocument:(id)arg0 ;
-(id)baseKeySpec;
-(id)baselineMetricsMaskWithDocument:(id)arg0 ;
-(id)columnCount;
-(id)columnIterationType;
-(id)copyDataFromAttributes;
-(id)dataFromAttributes;
-(id)edgeMetricsMaskWithDocument:(id)arg0 ;
-(id)isActive;
-(id)log;
-(id)psdImageRefWithDocument:(id)arg0 ;
-(id)relativePath;
-(id)rowCount;
-(id)rowIterationType;
-(id)textMetricsMaskWithDocument:(id)arg0 ;
-(void)_loadMetricsMasksWithDocument:(id)arg0 ;
-(void)addDrawingLayerIndex:(id)arg0 themeLayer:(id)arg1 toIndices:(id)arg2 layers:(id)arg3 lowestIndex:(*NSInteger)arg4 ;
-(void)appendToLog:(id)arg0 ;
-(void)copyAttributesInto:(id)arg0 ;
-(void)dealloc;
-(void)deleteRenditionsInDocument:(id)arg0 shouldDeleteAssetFiles:(BOOL)arg1 ;
-(void)fillIterationKeyAttribute:(id)arg0 iteration:(int)arg1 rowOrColumn:(int)arg2 document:(id)arg3 ;
-(void)getDrawingLayerIndices:(*id)arg0 themeLayers:(*id)arg1 lowestIndex:(*NSInteger)arg2 ;
-(void)setAttributesFromCopyData:(id)arg0 ;
-(void)setAttributesFromData:(id)arg0 ;
-(void)setColumnCount:(id)arg0 ;
-(void)setColumnIterationType:(id)arg0 ;
-(void)setIsActive:(id)arg0 ;
-(void)setRowCount:(id)arg0 ;
-(void)setRowIterationType:(id)arg0 ;


@end


#endif