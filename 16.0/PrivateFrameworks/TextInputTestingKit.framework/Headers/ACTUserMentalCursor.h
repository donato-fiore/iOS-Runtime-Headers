// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACTUSERMENTALCURSOR_H
#define ACTUSERMENTALCURSOR_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface ACTUserMentalCursor : NSObject

@property (readonly, nonatomic) BOOL atBeginningOfText;
@property (readonly, nonatomic) BOOL atEndOfText;
@property (readonly, nonatomic) NSString *currentComposedCharacter;
@property (readonly, nonatomic) NSString *currentExternalSegment;
@property (readonly, nonatomic) NSString *currentInternalSegment;
@property (readonly, nonatomic) NSString *currentLongCharacter;
@property (readonly, nonatomic) NSArray *externalSegments; // ivar: _externalSegments
@property (readonly, nonatomic) NSString *intendedText; // ivar: _intendedText
@property (readonly, nonatomic) NSArray *internalSegments; // ivar: _internalSegments
@property (readonly, nonatomic) NSString *nextLongCharacter;
@property (readonly, nonatomic) BOOL nextLongCharacterEndsSegment;
@property (nonatomic) NSUInteger positionInCurrentInternalSegment; // ivar: _positionInCurrentInternalSegment
@property (readonly, nonatomic) NSString *previousLongCharacter;
@property (nonatomic) NSUInteger segmentCursor; // ivar: _segmentCursor


-(BOOL)advanceSegmentCursor;
-(BOOL)rewindSegmentCursor;
-(id)init;
-(id)initWithInternalSegments:(id)arg0 externalSegments:(id)arg1 ;
-(id)initWithInternalSegments:(id)arg0 externalSegments:(id)arg1 segmentCursor:(NSUInteger)arg2 position:(NSUInteger)arg3 ;
-(id)longCharacterAtSegment:(NSUInteger)arg0 position:(NSUInteger)arg1 ;
-(struct _NSRange )rangeOfInputSegmentsForCandidate:(id)arg0 ;
-(void)advancePositionByString:(id)arg0 ;
-(void)enumerateRemainingLongCharactersForCurrentSegment:(id)arg0 ;
-(void)rewindPositionByString:(id)arg0 ;


@end


#endif