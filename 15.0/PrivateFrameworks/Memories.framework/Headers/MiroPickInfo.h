// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MIROPICKINFO_H
#define MIROPICKINFO_H

@protocol NSCopying, MiroMediaItem;

#import <Foundation/Foundation.h>


@interface MiroPickInfo : NSObject <NSCopying>



@property (nonatomic) NSUInteger adjustedPickOrder; // ivar: _adjustedPickOrder
@property (readonly, nonatomic) CGFloat biasedDuration;
@property (readonly, nonatomic) NSUInteger clipCompareResultFlags; // ivar: _clipCompareResultFlags
@property (nonatomic) float distance; // ivar: _distance
@property (readonly, nonatomic) CGFloat idealDuration;
@property (readonly, nonatomic) CGFloat idealDurationWithTrim;
@property (readonly, nonatomic) float imageDistance; // ivar: _imageDistance
@property (readonly, nonatomic) NSObject<MiroMediaItem> *item; // ivar: _item
@property (readonly, nonatomic) CGFloat maxPleasantDuration;
@property (nonatomic) NSUInteger pickOrder; // ivar: _pickOrder
@property (nonatomic) float score; // ivar: _score
@property (nonatomic) NSUInteger sourceOrder; // ivar: _sourceOrder
@property (nonatomic) float splitDistance; // ivar: _splitDistance
@property (nonatomic) NSUInteger splitOrder; // ivar: _splitOrder


+(id)pickInfoWithItem:(id)arg0 score:(float)arg1 distance:(float)arg2 splitDistance:(float)arg3 pickOrder:(NSUInteger)arg4 adjustedPickOrder:(NSUInteger)arg5 sourceOrder:(NSUInteger)arg6 splitOrder:(NSUInteger)arg7 imageDistance:(float)arg8 clipCompareResultFlags:(NSUInteger)arg9 ;
-(CGFloat)_idealDurationForBlueprint:(id)arg0 biased:(BOOL)arg1 max:(BOOL)arg2 ;
-(CGFloat)idealDurationForBlueprint:(id)arg0 biased:(BOOL)arg1 maxPleasant:(BOOL)arg2 respectTrim:(BOOL)arg3 ;
-(CGFloat)idealDurationForBlueprint:(id)arg0 respectTrim:(BOOL)arg1 ;
-(CGFloat)trimmedDuration;
-(CGFloat)voiceRangeDuration;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif