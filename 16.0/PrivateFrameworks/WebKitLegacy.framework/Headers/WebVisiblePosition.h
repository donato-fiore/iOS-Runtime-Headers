// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WEBVISIBLEPOSITION_H
#define WEBVISIBLEPOSITION_H


#import <Foundation/Foundation.h>


@interface WebVisiblePosition : NSObject {
    *WebObjectInternal _internal;
}


@property (nonatomic) NSUInteger affinity;


+(id)_wrapVisiblePosition:(struct VisiblePosition )arg0 ;
+(id)_wrapVisiblePositionIfValid:(struct VisiblePosition )arg0 ;
-(BOOL)atAlphaNumericBoundaryInDirection:(int)arg0 ;
-(BOOL)atBoundaryOfGranularity:(int)arg0 inDirection:(int)arg1 ;
-(BOOL)directionIsDownstream:(int)arg0 ;
-(BOOL)isEditable;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)requiresContextForWordBoundary;
-(BOOL)textDirection;
-(BOOL)withinTextUnitOfGranularity:(int)arg0 inDirectionIfAtBoundary:(int)arg1 ;
-(NSInteger)compare:(id)arg0 ;
-(id)description;
-(id)enclosingRangeWithCorrectionIndicator;
-(id)enclosingRangeWithDictationPhraseAlternatives:(*id)arg0 ;
-(id)enclosingTextUnitOfGranularity:(int)arg0 inDirectionIfAtBoundary:(int)arg1 ;
-(id)positionAtStartOrEndOfWord;
-(id)positionByMovingInDirection:(int)arg0 amount:(unsigned int)arg1 ;
-(id)positionByMovingInDirection:(int)arg0 amount:(unsigned int)arg1 withAffinityDownstream:(BOOL)arg2 ;
-(id)positionOfNextBoundaryOfGranularity:(int)arg0 inDirection:(int)arg1 ;
-(int)distanceFromPosition:(id)arg0 ;
-(struct VisiblePosition )_visiblePosition;
-(void)dealloc;


@end


#endif