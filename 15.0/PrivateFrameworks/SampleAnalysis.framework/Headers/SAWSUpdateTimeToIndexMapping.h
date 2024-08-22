// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAWSUPDATETIMETOINDEXMAPPING_H
#define SAWSUPDATETIMETOINDEXMAPPING_H


#import <Foundation/Foundation.h>


@interface SAWSUpdateTimeToIndexMapping : NSObject

@property (readonly) NSUInteger deferEndSampleIndex;
@property (readonly) NSUInteger deferStartSampleIndex; // ivar: _deferStartSampleIndex
@property (readonly) NSUInteger frameEndSampleIndex;
@property (readonly) NSUInteger frameStartSampleIndex;
@property (readonly) NSUInteger numDeferIndices; // ivar: _numDeferIndices
@property (readonly) NSUInteger numFrameIndices;
@property (readonly) NSUInteger numWaitIndices; // ivar: _numWaitIndices
@property (readonly) NSUInteger numWorkIndices; // ivar: _numWorkIndices
@property (readonly) NSUInteger waitEndSampleIndex;
@property (readonly) NSUInteger waitStartSampleIndex; // ivar: _waitStartSampleIndex
@property (readonly) NSUInteger workEndSampleIndex;
@property (readonly) NSUInteger workStartSampleIndex; // ivar: _workStartSampleIndex


+(id)arrayOfMappingsFromWSUpdataDataArray:(id)arg0 andSampleDataStore:(id)arg1 ;
-(id)initWithWSUpdateData:(id)arg0 andSampleDataStore:(id)arg1 andHintIndex:(NSUInteger)arg2 ;
-(void)printDeferIndexRangeToStream:(id)arg0 withTranslationDelta:(NSInteger)arg1 ;
-(void)printFrameIndexRangeToStream:(id)arg0 withTranslationDelta:(NSInteger)arg1 ;
-(void)printWaitIndexRangeToStream:(id)arg0 withTranslationDelta:(NSInteger)arg1 ;
-(void)printWorkIndexRangeToStream:(id)arg0 withTranslationDelta:(NSInteger)arg1 ;


@end


#endif