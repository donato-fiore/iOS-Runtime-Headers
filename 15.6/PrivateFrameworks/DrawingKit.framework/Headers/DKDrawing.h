// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DKDRAWING_H
#define DKDRAWING_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DKDrawing : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) CGRect canvasBounds; // ivar: _canvasBounds
@property (retain, nonatomic) NSArray *strokes; // ivar: _strokes
@property (nonatomic) CGRect strokesFrame; // ivar: _strokesFrame
@property (readonly, nonatomic) NSInteger totalPoints;


+(BOOL)supportsSecureCoding;
+(id)copyOfDrawing:(id)arg0 toFitInBounds:(struct CGRect )arg1 ;
+(void)resizeDrawing:(id)arg0 toFitInBounds:(struct CGRect )arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)decodedBrushStrokesWithArchiverEncodedBrushStrokes:(id)arg0 ;
-(id)encodeBrushStrokesForArchiving;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableStrokes;
-(void)addBrushStroke:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeLastBrushStroke;
-(void)reset;


@end


#endif