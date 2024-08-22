// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PTCINEMATOGRAPHYDETECTION_H
#define PTCINEMATOGRAPHYDETECTION_H

@class NSDictionary, NSString, NSNumber;
@protocol PTSerialization, PTArraySerialization, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface PTCinematographyDetection : NSObject <PTSerialization, PTArraySerialization, NSCopying, NSMutableCopying>



@property (nonatomic, getter=_isExcludedAsCinematicChoice, setter=_setExcludedAsCinematicChoice:) BOOL _excludedAsCinematicChoice;
@property (nonatomic, getter=_isExcludedAsCinematicChoice, setter=_setExcludedAsCinematicChoice:) BOOL _excludedAsCinematicChoice; // ivar: __excludedAsCinematicChoice
@property (nonatomic, getter=_isInvalid, setter=_setInvalid:) BOOL _invalid;
@property (retain, nonatomic) NSDictionary *_namedSignals;
@property (retain, nonatomic) NSDictionary *_namedSignals; // ivar: __namedSignals
@property (retain, nonatomic) NSString *cachedFocusIdentifier; // ivar: _cachedFocusIdentifier
@property (nonatomic) BOOL cachedFocusIdentifierWasSetByClient; // ivar: _cachedFocusIdentifierWasSetByClient
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger detectionType; // ivar: _detectionType
@property (nonatomic) float focusDistance; // ivar: _focusDistance
@property (nonatomic) NSInteger groupIdentifier; // ivar: _groupIdentifier
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isAutoFocusDetection;
@property (readonly, nonatomic) BOOL isCustomDetection;
@property (readonly, nonatomic) BOOL isFixedFocusDetection;
@property (nonatomic) CGRect rect; // ivar: _rect
@property (readonly) Class superclass;
@property (nonatomic) ? time; // ivar: _time
@property (nonatomic) NSInteger trackIdentifier;
@property (retain, nonatomic) NSNumber *trackNumber;
@property (retain, nonatomic) NSNumber *trackNumber; // ivar: _trackNumber


+(BOOL)writeArray:(id)arg0 toAtomWriter:(id)arg1 options:(id)arg2 ;
+(NSUInteger)_detectionTypeForPrefix:(id)arg0 ;
+(NSUInteger)sizeOfSerializedArray:(id)arg0 options:(id)arg1 ;
+(id)_cinematographyArrayFromDetections:(id)arg0 ;
+(id)_detectionsByFocusIdentifierFromArray:(id)arg0 ;
+(id)_detectionsByTrackIdentifierFromArray:(id)arg0 ;
+(id)_detectionsFromCinematographyArray:(id)arg0 ;
+(id)_detectionsFromInnerAtomStream:(id)arg0 ;
+(id)_prefixForDetectionType:(NSUInteger)arg0 ;
+(id)objectFromAtomStream:(id)arg0 ;
+(id)objectsFromAtomStream:(id)arg0 ;
+(void)initialize;
+(void)registerForSerialization;
-(BOOL)_copyToDetectionData_0:(struct DetectionData_0 *)arg0 ;
-(BOOL)_fixMissingTrackIdentifier:(NSInteger)arg0 ;
-(BOOL)_isEqual:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)supportsVersion:(NSUInteger)arg0 ;
-(BOOL)writeToAtomWriter:(id)arg0 options:(id)arg1 ;
-(NSUInteger)sizeOfSerializedObjectWithOptions:(id)arg0 ;
-(id)_asCinematographyDictionary;
-(id)_detectionByChangingTime:(struct ? )arg0 ;
-(id)_initWithCinematographyDictionary:(id)arg0 ;
-(id)_initWithDetectionData_0:(struct DetectionData_0 *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)focusIdentifier;
-(id)initWithTime:(struct ? )arg0 rect:(struct CGRect )arg1 focusDistance:(float)arg2 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)_clearCachedFocusIdentifier;
-(void)_restoreOriginal;
-(void)setFocusIdentifier:(id)arg0 ;


@end


#endif