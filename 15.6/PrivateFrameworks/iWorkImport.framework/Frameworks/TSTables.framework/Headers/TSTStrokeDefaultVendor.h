// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTSTROKEDEFAULTVENDOR_H
#define TSTSTROKEDEFAULTVENDOR_H

@class NSPointerArray;
@protocol TSTTableStrokeProviding, TSTTableHiddenRowColumnProviding><TSTTableInternalGeometryProviding;

#import <Foundation/Foundation.h>

#import "TSTTableInfo.h"

@interface TSTStrokeDefaultVendor : NSObject

@property (nonatomic) _NSRange bodySideBorderColumnRange; // ivar: _bodySideBorderColumnRange
@property (nonatomic) _NSRange bottomBorderRowRange; // ivar: _bottomBorderRowRange
@property (nonatomic) _NSRange footerColumnSeparatorColumnRange; // ivar: _footerColumnSeparatorColumnRange
@property (nonatomic) _NSRange footerRowSeparatorRowRange; // ivar: _footerRowSeparatorRowRange
@property (nonatomic) _NSRange headerColumnSeparatorColumnRange; // ivar: _headerColumnSeparatorColumnRange
@property (nonatomic) _NSRange headerRowSeparatorRowRange; // ivar: _headerRowSeparatorRowRange
@property (nonatomic) _NSRange headerSideBorderColumnRange; // ivar: _headerSideBorderColumnRange
@property (nonatomic) BOOL isValid; // ivar: _isValid
@property (weak, nonatomic) NSObject<TSTTableStrokeProviding> *strokeProvider; // ivar: _strokeProvider
@property (retain, nonatomic) NSPointerArray *strokeTypeToLayerMap; // ivar: _strokeTypeToLayerMap
@property (retain, nonatomic) NSPointerArray *strokeTypeToLayerStackMap; // ivar: _strokeTypeToLayerStackMap
@property (weak, nonatomic) TSTTableInfo *tableInfo; // ivar: _tableInfo
@property (weak, nonatomic) NSObject<TSTTableHiddenRowColumnProviding><TSTTableInternalGeometryProviding> *tableProvider; // ivar: _tableProvider
@property (nonatomic) _NSRange topBorderRowRange; // ivar: _topBorderRowRange


-(BOOL)validateGeometry;
-(NSUInteger)p_strokeTypeForColumn:(unsigned int)arg0 ;
-(NSUInteger)p_strokeTypeForRow:(unsigned int)arg0 ;
-(id)initWithStrokeProvider:(id)arg0 tableProvider:(id)arg1 tableInfo:(id)arg2 ;
-(id)strokeLayerForColumn:(unsigned int)arg0 ;
-(id)strokeLayerForRow:(unsigned int)arg0 ;
-(id)strokeLayerForStrokeType:(NSUInteger)arg0 ;
-(id)strokeLayerStackForColumn:(unsigned int)arg0 ;
-(id)strokeLayerStackForRow:(unsigned int)arg0 ;
-(id)strokeLayerStackForStrokeType:(NSUInteger)arg0 ;
-(int)validateChangeDescriptors:(id)arg0 ;
-(void)invalidate;
-(void)p_updateStrokeLayer:(id)arg0 forColumnStrokeType:(NSUInteger)arg1 ;
-(void)p_updateStrokeLayer:(id)arg0 forRowStrokeType:(NSUInteger)arg1 ;


@end


#endif