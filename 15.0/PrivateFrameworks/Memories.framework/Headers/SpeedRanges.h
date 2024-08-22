// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SPEEDRANGES_H
#define SPEEDRANGES_H

@class NSMutableArray;
@protocol NSFastEnumeration, NSCopying, SpeedRangeDelegate;

#import <Foundation/Foundation.h>

#import "SpeedRanges.h"

@interface SpeedRanges : NSObject <NSFastEnumeration, NSCopying>



@property (retain, nonatomic) NSMutableArray *array; // ivar: _array
@property (weak, nonatomic) NSObject<SpeedRangeDelegate> *delegate; // ivar: _delegate
@property int editCount; // ivar: _editCount
@property (readonly, nonatomic) BOOL isEdited;
@property (nonatomic) int mediaDuration; // ivar: _mediaDuration
@property (retain, nonatomic) SpeedRanges *old; // ivar: _old
@property (retain, nonatomic) SpeedRanges *ramped; // ivar: _ramped


+(id)objectFromPlist:(id)arg0 ;
+(void)rangesFromSloMoAsset:(id)arg0 userAdjustedOnly:(BOOL)arg1 completion:(id)arg2 ;
-(BOOL)containsObject:(id)arg0 ;
-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)indexOfObject:(id)arg0 ;
-(float)mediaTimeFloatForClipTime:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)firstObject;
-(id)generateRamps;
-(id)init;
-(id)initWithDuration:(int)arg0 ;
-(id)lastObject;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;
-(id)plistRepresentation;
-(id)setFromAdjustmentData:(id)arg0 ;
-(id)speedRangeAtClipTime:(int)arg0 ;
-(int)clipTimeForMediaTime:(int)arg0 ;
-(int)mapClipTime:(int)arg0 fromMap:(id)arg1 ;
-(int)mediaTimeForClipTime:(int)arg0 ;
-(void)_removeBackToBackFreezes;
-(void)addObject:(id)arg0 ;
-(void)didChange;
-(void)forwardInvocation:(id)arg0 ;
-(void)insertObject:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)removeLastObject;
-(void)removeObject:(id)arg0 ;
-(void)removeObjectAtIndex:(NSUInteger)arg0 ;
-(void)removeShortRanges;
-(void)replaceObjectAtIndex:(NSUInteger)arg0 withObject:(id)arg1 ;
-(void)setObject:(id)arg0 atIndexedSubscript:(NSUInteger)arg1 ;
-(void)testRamps;
-(void)testUberRamp;
-(void)updateLinks;
-(void)willChange;


@end


#endif