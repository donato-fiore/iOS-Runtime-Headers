// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDINSERTVALUESTOQUANTITYSAMPLESERIESOPERATION_H
#define HDINSERTVALUESTOQUANTITYSAMPLESERIESOPERATION_H

@class NSUUID, HKQuantitySample, NSArray;


#import "HDJournalableOperation.h"

@interface HDInsertValuesToQuantitySampleSeriesOperation : HDJournalableOperation {
    NSUUID *_legacySeriesIdentifier;
    BOOL _didAwakeFromJournal;
}


@property (readonly, copy, nonatomic) HKQuantitySample *series; // ivar: _series
@property (readonly, copy, nonatomic) NSArray *values; // ivar: _values


+(BOOL)supportsSecureCoding;
-(BOOL)performWithProfile:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSeries:(id)arg0 values:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif