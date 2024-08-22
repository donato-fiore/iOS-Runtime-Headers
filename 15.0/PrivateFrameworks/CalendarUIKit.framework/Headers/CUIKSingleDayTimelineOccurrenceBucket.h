// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUIKSINGLEDAYTIMELINEOCCURRENCEBUCKET_H
#define CUIKSINGLEDAYTIMELINEOCCURRENCEBUCKET_H

@class NSMutableArray, NSArray;
@protocol CUIKSingleDayTimelineViewItem, CUIKSingleDayTimelineLayoutScreenUtils, CUIKSingleDayTimelineGeometryDelegate;

#import <Foundation/Foundation.h>

#import "CUIKSingleDayTimelineLayoutPartition.h"

@interface CUIKSingleDayTimelineOccurrenceBucket : NSObject {
    id<CUIKSingleDayTimelineViewItem> *_temporaryOccurrenceAtBeginning;
    id<CUIKSingleDayTimelineViewItem> *_temporaryOccurrenceAtEnd;
    id<CUIKSingleDayTimelineLayoutScreenUtils> *_screenUtilsDelegate;
    BOOL _useTemporaryFitnessLevel;
    BOOL _temporaryFitnessLevelRequiresCalculation;
    CGFloat _temporaryFitnessLevel;
    BOOL _originalFitnessLevelRequiresCalculation;
    CGFloat _originalFitnessLevel;
    BOOL _ignoreFirstOccurrenceInFitnessCalculations;
    BOOL _ignoreLastOccurrenceInFitnessCalculations;
}


@property (retain, nonatomic) CUIKSingleDayTimelineLayoutPartition *correspondingPartition; // ivar: _correspondingPartition
@property (retain, nonatomic) NSMutableArray *currentOccurrences; // ivar: _currentOccurrences
@property (weak) NSObject<CUIKSingleDayTimelineGeometryDelegate> *geometryDelegate; // ivar: _geometryDelegate
@property (nonatomic) BOOL isOnlyBucket; // ivar: _isOnlyBucket
@property (readonly, nonatomic) NSArray *occurrences;


+(struct CGRect )roundRectToScreenScaleForRect:(struct CGRect )arg0 screenUtilsDelegate:(id)arg1 ;
-(id)earliestOccurrence;
-(id)initWithOccurrences:(id)arg0 correspondingPartition:(id)arg1 screenUtilsDelegate:(id)arg2 ;
-(id)initWithOccurrences:(id)arg0 correspondingPartition:(id)arg1 screenUtilsDelegate:(id)arg2 geometryDelegate:(id)arg3 ;
-(void)addOccurrenceTemporarilyToBeginning:(id)arg0 ;
-(void)addOccurrenceTemporarilyToEnd:(id)arg0 ;
-(void)makeTemporaryChangesPermanent;
-(void)removeOccurrenceAtBeginningTemporarily;
-(void)removeOccurrenceAtEndTemporarily;
-(void)revertTemporaryChanges;
-(void)stampFramesOntoOccurrences;


@end


#endif