// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKATOMBATCH_H
#define CKATOMBATCH_H

@class NSData;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "CKXBackingStore.h"
#import "CKDistributedTimestampStateVector.h"
#import "CKMergeableValueID.h"
#import "CKAtomBatchMetadata.h"

@interface CKAtomBatch : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) id *atomValueDescriptionBlock; // ivar: _atomValueDescriptionBlock
@property (retain, nonatomic) CKXBackingStore *backingStore; // ivar: _backingStore
@property (readonly, nonatomic) NSInteger count;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) CKDistributedTimestampStateVector *enumeratedContentsVector;
@property (readonly, nonatomic) unsigned char formatVersion;
@property (readonly, nonatomic) BOOL isWriting;
@property (readonly, nonatomic) CKMergeableValueID *mergeableValueID; // ivar: _mergeableValueID
@property (readonly, nonatomic) CKAtomBatchMetadata *metadata; // ivar: _metadata
@property (readonly, nonatomic) ? writerIdentity;


+(BOOL)supportsSecureCoding;
+(id)bindingForFormatVersion:(unsigned char)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)numberOfAtoms;
-(NSUInteger)hash;
-(id)atomBatchWithMergeableValueID:(id)arg0 metadata:(id)arg1 finishWriting:(BOOL)arg2 ;
-(id)atomsNotInContentsVector;
-(id)batchWithAtomsContainedInContentsVector;
-(id)copyWithMergeableValueID:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithStringSiteIdentifiers;
-(id)descriptionWithStringSiteIdentifiers:(BOOL)arg0 ;
-(id)initPlaceholderWithMergeableValueID:(id)arg0 metadata:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 error:(*id)arg1 ;
-(id)initWithData:(id)arg0 mergeableValueID:(id)arg1 metadata:(id)arg2 error:(*id)arg3 ;
-(id)initWithFormatVersion:(unsigned char)arg0 optionsByReaderWriterClass:(id)arg1 mergeableValueID:(id)arg2 metadata:(id)arg3 data:(id)arg4 error:(*id)arg5 ;
-(id)initWriter;
-(id)initWriterWithAtomLocation:(id)arg0 ;
-(id)initWriterWithAtomLocation:(id)arg0 version:(unsigned char)arg1 ;
-(id)initWriterWithMergeableValueID:(id)arg0 ;
-(id)initWriterWithMergeableValueID:(id)arg0 metadata:(id)arg1 version:(unsigned char)arg2 ;
-(id)initWriterWithMergeableValueID:(id)arg0 version:(unsigned char)arg1 ;
-(id)location;
-(id)writableCopy;
-(id)writableCopyWithMergeableValueID:(id)arg0 metadata:(id)arg1 ;
-(void)appendAtomWithBlock:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateAtomsWithOptions:(id)arg0 usingBlock:(id)arg1 ;
-(void)finishWriting;
-(void)mergeAtomBatch:(id)arg0 ;


@end


#endif