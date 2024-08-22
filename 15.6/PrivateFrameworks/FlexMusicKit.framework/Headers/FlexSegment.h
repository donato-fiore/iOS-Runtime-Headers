// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FLEXSEGMENT_H
#define FLEXSEGMENT_H

@class NSArray, NSDictionary, NSString;
@protocol NSCopying, NSDictionaryCoding;

#import <Foundation/Foundation.h>


@interface FlexSegment : NSObject <NSCopying, NSDictionaryCoding>



@property (nonatomic) NSInteger bars; // ivar: _bars
@property (nonatomic) NSInteger beatsPerBar; // ivar: _beatsPerBar
@property (retain, nonatomic) NSArray *customBarMarkers; // ivar: _customBarMarkers
@property (nonatomic) NSUInteger errors; // ivar: _errors
@property (retain, nonatomic) NSDictionary *markers; // ivar: _markers
@property (readonly, nonatomic) NSDictionary *metadataValues; // ivar: _metadataValues
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSString *nameIndex; // ivar: _nameIndex
@property (readonly, copy, nonatomic) NSString *namePrefix; // ivar: _namePrefix
@property (readonly, copy, nonatomic) NSString *nameStem; // ivar: _nameStem
@property (readonly, copy, nonatomic) NSString *nameSuffix; // ivar: _nameSuffix
@property (nonatomic) NSInteger priority; // ivar: _priority
@property (nonatomic) NSInteger sampleCount; // ivar: _sampleCount
@property (nonatomic) NSInteger sampleRate; // ivar: _sampleRate
@property (nonatomic) NSInteger samplesPerBar; // ivar: _samplesPerBar
@property (nonatomic) BOOL sliceable; // ivar: _sliceable
@property (retain, nonatomic) NSDictionary *transitions; // ivar: _transitions
@property (nonatomic) NSUInteger type; // ivar: _type


+(BOOL)canTransitionFromSegment:(id)arg0 toSegment:(id)arg1 fromBarIndex:(NSInteger)arg2 checkIfPrevented:(BOOL)arg3 ;
+(NSInteger)crossfadeLengthInSamplesForFromSeg:(id)arg0 toSeg:(id)arg1 fadeOutTimeInMsec:(NSInteger)arg2 fadeInTimeInMsec:(NSInteger)arg3 validFadeOutSamples:(*NSInteger)arg4 validFadeInSamples:(*NSInteger)arg5 ;
+(NSInteger)samplesForTimeInMsec:(NSInteger)arg0 atSampleRate:(NSInteger)arg1 ;
+(id)longLabelForSegmentType:(NSUInteger)arg0 ;
+(id)readInfoFromAudioFileAtPath:(id)arg0 ;
+(id)segmentWithName:(id)arg0 inSegments:(id)arg1 ;
+(id)segmentsWithType:(NSUInteger)arg0 inSegments:(id)arg1 ;
+(id)segmentsWithType:(NSUInteger)arg0 nameIndex:(id)arg1 nameSuffix:(id)arg2 inSegments:(id)arg3 ;
+(id)shortLabelForSegmentType:(NSUInteger)arg0 ;
-(BOOL)isPriorityValid;
-(BOOL)linkedPerBarTransitionsToSegmentNamed:(id)arg0 ;
-(BOOL)relinkAllTransitions;
-(NSInteger)barDurationForBarIndex:(NSInteger)arg0 ;
-(NSInteger)barEndPositionForBarIndex:(NSInteger)arg0 ;
-(NSInteger)barStartPositionForBarIndex:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)encodeAsDictionary;
-(id)initAsCrossFade:(id)arg0 sampleRate:(NSInteger)arg1 sampleCount:(NSInteger)arg2 beatsPerBar:(NSInteger)arg3 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFileAtPath:(id)arg0 ;
-(id)metadataValueForKey:(id)arg0 ;
-(id)transitionToSegmentNamed:(id)arg0 fromBarIndex:(NSInteger)arg1 ;
-(void)_decodeTypeInfoFromSegmentName;
-(void)addMetadataValue:(id)arg0 forKey:(id)arg1 ;
-(void)addOrReplaceTransition:(id)arg0 toSegmentNamed:(id)arg1 fromBarIndex:(NSInteger)arg2 ;
-(void)removeTransitionToSegmentNamed:(id)arg0 fromBarIndex:(NSInteger)arg1 ;
-(void)setLinkedPerBarTransitions:(BOOL)arg0 toSegmentNamed:(id)arg1 ;


@end


#endif