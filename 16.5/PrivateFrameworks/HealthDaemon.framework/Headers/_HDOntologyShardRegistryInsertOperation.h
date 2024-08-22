// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HDONTOLOGYSHARDREGISTRYINSERTOPERATION_H
#define _HDONTOLOGYSHARDREGISTRYINSERTOPERATION_H

@class NSArray;


#import "HDJournalableOperation.h"

@interface _HDOntologyShardRegistryInsertOperation : HDJournalableOperation {
    NSArray *_entries;
}




+(BOOL)supportsSecureCoding;
-(BOOL)performWithProfile:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif