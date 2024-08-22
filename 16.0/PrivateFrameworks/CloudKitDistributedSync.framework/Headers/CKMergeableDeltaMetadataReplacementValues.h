// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKMERGEABLEDELTAMETADATAREPLACEMENTVALUES_H
#define CKMERGEABLEDELTAMETADATAREPLACEMENTVALUES_H

@class NSSet, NSDictionary;

#import <Foundation/Foundation.h>

#import "CKMergeableDeltaMetadata.h"

@interface CKMergeableDeltaMetadataReplacementValues : NSObject

@property (retain, nonatomic) NSSet *removableDeltaMetadatas; // ivar: _removableDeltaMetadatas
@property (retain, nonatomic) NSDictionary *replacementDeltaMetadatas; // ivar: _replacementDeltaMetadatas
@property (retain, nonatomic) CKMergeableDeltaMetadata *updatedNextDeltaMetadata; // ivar: _updatedNextDeltaMetadata


-(id)description;
-(id)init;


@end


#endif