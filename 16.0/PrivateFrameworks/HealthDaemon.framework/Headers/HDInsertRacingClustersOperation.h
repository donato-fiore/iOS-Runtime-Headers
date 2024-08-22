// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDINSERTRACINGCLUSTERSOPERATION_H
#define HDINSERTRACINGCLUSTERSOPERATION_H

@class NSArray;


#import "HDJournalableOperation.h"

@interface HDInsertRacingClustersOperation : HDJournalableOperation

@property (readonly, copy, nonatomic) NSArray *clusters; // ivar: _clusters
@property (readonly, nonatomic) NSInteger provenance; // ivar: _provenance


+(BOOL)supportsSecureCoding;
-(BOOL)performWithProfile:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(id)initWithClusters:(id)arg0 provenance:(NSInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif