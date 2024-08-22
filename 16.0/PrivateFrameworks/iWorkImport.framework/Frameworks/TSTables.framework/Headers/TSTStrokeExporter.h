// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTSTROKEEXPORTER_H
#define TSTSTROKEEXPORTER_H

@class NSPointerArray, TSUIntegerKeyDictionary;
@protocol TSTCustomStrokeProviding, TSTTableStrokeProviding;

#import <Foundation/Foundation.h>

#import "TSTTableInfo.h"

@interface TSTStrokeExporter : NSObject

@property (readonly, nonatomic) NSPointerArray *bottomRowStrokes; // ivar: _bottomRowStrokes
@property (retain, nonatomic) TSUIntegerKeyDictionary *columnStrokeExportCache; // ivar: _columnStrokeExportCache
@property (readonly, nonatomic) NSObject<TSTCustomStrokeProviding> *customStrokeProvider; // ivar: _customStrokeProvider
@property (readonly, nonatomic) NSObject<TSTTableStrokeProviding> *defaultStrokeProvider; // ivar: _defaultStrokeProvider
@property (readonly, nonatomic) NSPointerArray *leftColumnStrokes; // ivar: _leftColumnStrokes
@property (readonly, nonatomic) NSPointerArray *rightColumnStrokes; // ivar: _rightColumnStrokes
@property (retain, nonatomic) TSUIntegerKeyDictionary *rowStrokeExportCache; // ivar: _rowStrokeExportCache
@property (readonly, nonatomic) TSTTableInfo *tableInfo; // ivar: _tableInfo
@property (readonly, nonatomic) NSPointerArray *topRowStrokes; // ivar: _topRowStrokes


-(id)initWithDefaultStrokeProvider:(id)arg0 customStrokeProvider:(id)arg1 tableInfo:(id)arg2 ;
-(id)p_strokeExportCacheForColumnBefore:(unsigned short)arg0 columnAfter:(unsigned short)arg1 ;
-(id)p_strokeExportCacheForGridColumn:(unsigned int)arg0 ;
-(id)p_strokeExportCacheForGridRow:(unsigned int)arg0 ;
-(id)p_strokeExportCacheForRowAbove:(unsigned int)arg0 rowBelow:(unsigned int)arg1 ;
-(id)strokeLayerForColumn:(unsigned int)arg0 ;
-(id)strokeLayerForRow:(unsigned int)arg0 ;
-(void)p_resolveStrokes;
-(void)strokesForCellID:(struct TSUCellCoord )arg0 top:(*id)arg1 left:(*id)arg2 bottom:(*id)arg3 right:(*id)arg4 ;


@end


#endif