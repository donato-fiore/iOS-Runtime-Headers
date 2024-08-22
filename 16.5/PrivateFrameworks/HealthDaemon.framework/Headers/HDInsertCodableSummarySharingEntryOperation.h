// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDINSERTCODABLESUMMARYSHARINGENTRYOPERATION_H
#define HDINSERTCODABLESUMMARYSHARINGENTRYOPERATION_H

@class NSArray;


#import "HDJournalableOperation.h"

@interface HDInsertCodableSummarySharingEntryOperation : HDJournalableOperation

@property (readonly, copy, nonatomic) NSArray *codableEntries; // ivar: _codableEntries
@property (readonly, nonatomic) BOOL ignoreIfExists; // ivar: _ignoreIfExists
@property (readonly, nonatomic) NSInteger provenance; // ivar: _provenance
@property (readonly, nonatomic) BOOL shouldResolveCNContact; // ivar: _shouldResolveCNContact


+(BOOL)supportsSecureCoding;
-(BOOL)performWithProfile:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)initWithCodableEntries:(id)arg0 ignoreIfExists:(BOOL)arg1 provenance:(NSInteger)arg2 shouldResolveCNContact:(BOOL)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif