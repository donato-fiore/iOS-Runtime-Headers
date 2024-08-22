// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKKEYFRAMESEQUENCE_H
#define SKKEYFRAMESEQUENCE_H

@class NSMutableArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SKKeyframeSequence : NSObject <NSSecureCoding, NSCopying>

 {
    NSUInteger _count;
    NSMutableArray *_values;
    NSMutableArray *_times;
    NSInteger _interpolationMode;
    NSInteger _repeatMode;
    *SKCKeyframeSequence _cKeyframeSequence;
}


@property (nonatomic) NSInteger interpolationMode;
@property (nonatomic) NSInteger repeatMode;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqualToSequence:(id)arg0 ;
-(CGFloat)getKeyframeTimeForIndex:(NSUInteger)arg0 ;
-(Class)_valueClass;
-(NSUInteger)count;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)getKeyframeValueForIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCount:(NSUInteger)arg0 ;
-(id)initWithKeyframeValues:(id)arg0 times:(id)arg1 ;
-(id)sampleAtTime:(CGFloat)arg0 ;
-(struct SKCKeyframeSequence *)_createSKCKeyframeSequence;
-(void)_dirtySKCKeyframeSequence;
-(void)addKeyframeValue:(id)arg0 time:(CGFloat)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeAllKeyframes;
-(void)removeKeyframeAtIndex:(NSUInteger)arg0 ;
-(void)removeLastKeyframe;
-(void)setKeyframeTime:(CGFloat)arg0 forIndex:(NSUInteger)arg1 ;
-(void)setKeyframeValue:(id)arg0 forIndex:(NSUInteger)arg1 ;
-(void)setKeyframeValue:(id)arg0 time:(CGFloat)arg1 forIndex:(NSUInteger)arg2 ;


@end


#endif