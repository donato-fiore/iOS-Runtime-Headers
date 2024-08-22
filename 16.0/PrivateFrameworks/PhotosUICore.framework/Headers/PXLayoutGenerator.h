// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXLAYOUTGENERATOR_H
#define PXLAYOUTGENERATOR_H

@class NSString, NSIndexSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "PXLayoutMetrics.h"

@interface PXLayoutGenerator : NSObject <NSCopying>



@property (readonly, nonatomic) _PXCornerSpriteIndexes cornerSpriteIndexes;
@property (readonly, nonatomic) NSString *diagnosticDescription;
@property (readonly, nonatomic) CGSize estimatedSize;
@property (readonly, nonatomic) NSIndexSet *geometryKinds;
@property (nonatomic) NSUInteger itemCount; // ivar: _itemCount
@property (copy, nonatomic) id *itemLayoutInfoBlock; // ivar: _itemLayoutInfoBlock
@property (nonatomic) NSUInteger keyItemIndex; // ivar: _keyItemIndex
@property (copy, nonatomic) PXLayoutMetrics *metrics; // ivar: _metrics
@property (readonly, nonatomic) CGSize size;


-(NSUInteger)numberOfGeometriesWithKind:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithMetrics:(id)arg0 ;
-(void)getGeometries:(struct _PXLayoutGeometry *)arg0 inRange:(struct _NSRange )arg1 withKind:(NSInteger)arg2 ;
-(void)invalidate;


@end


#endif