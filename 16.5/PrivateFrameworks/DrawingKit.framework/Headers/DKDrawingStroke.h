// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DKDRAWINGSTROKE_H
#define DKDRAWINGSTROKE_H

@class NSMutableArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface DKDrawingStroke : NSObject <NSCopying>



@property (readonly) NSMutableArray *strokePoints; // ivar: _strokePoints


+(id)drawingStrokeWithData:(id)arg0 count:(NSUInteger)arg1 ;
-(id)_decodeDKEncodedDrawingPointDataAsArray:(id)arg0 count:(NSInteger)arg1 ;
-(id)_encodePointsDrawingPointData:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)encodedBrushStroke;
-(id)init;


@end


#endif