// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDINSERTCODABLECONTRIBUTORSOPERATION_H
#define HDINSERTCODABLECONTRIBUTORSOPERATION_H

@class NSArray;


#import "HDJournalableOperation.h"

@interface HDInsertCodableContributorsOperation : HDJournalableOperation

@property (readonly, copy, nonatomic) NSArray *contributors; // ivar: _contributors
@property (readonly, nonatomic) NSInteger provenance; // ivar: _provenance


+(BOOL)supportsSecureCoding;
-(BOOL)performWithProfile:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContributors:(id)arg0 provenance:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif