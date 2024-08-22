// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKATOMBATCH_H
#define CKATOMBATCH_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "CKXBackingStore.h"
#import "CKDistributedTimestampStateVector.h"
#import "CKMergeableValueID.h"
#import "CKMergeableDeltaMetadata.h"
#import "CKDSReadableStorage.h"

@interface CKAtomBatch : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) id *atomValueDescriptionBlock; // ivar: _atomValueDescriptionBlock
@property (retain, nonatomic) CKXBackingStore *backingStore; // ivar: _backingStore
@property (readonly, nonatomic) NSInteger count;
@property (readonly, nonatomic) CKDistributedTimestampStateVector *enumeratedContentsVector;
@property (readonly, nonatomic) BOOL fileBacked;
@property (readonly, nonatomic) unsigned char formatVersion;
@property (readonly, nonatomic) BOOL isWriting;
@property (readonly, nonatomic) CKMergeableValueID *mergeableValueID; // ivar: _mergeableValueID
@property (readonly, nonatomic) CKMergeableDeltaMetadata *metadata; // ivar: _metadata
@property (readonly, nonatomic) CKDSReadableStorage *storage;
@property (readonly, nonatomic) ? writerIdentity;


+(BOOL)supportsSecureCoding;
+(id)atomBatchByMergingAtomBatches:(id)arg0 error:(*id)arg1 ;
+(id)bindingForFormatVersion:(unsigned char)arg0 ;
-(BOOL)finishWritingWithError:(*id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)size:(*NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)splitWithMaximumSize:(NSUInteger)arg0 error:(*id)arg1 block:(id)arg2 ;
-(BOOL)validateWithError:(*id)arg0 ;
-(NSUInteger)hash;
-(id)contentsDescription;
-(id)contentsDescriptionWithStringSiteIdentifiers;
-(id)contentsDescriptionWithStringSiteIdentifiers:(BOOL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)data;
-(id)dataWithError:(*id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 error:(*id)arg1 ;
-(id)initWithData:(id)arg0 mergeableValueID:(id)arg1 metadata:(id)arg2 error:(*id)arg3 ;
-(id)initWithData:(id)arg0 mergeableValueID:(id)arg1 metadata:(id)arg2 options:(id)arg3 error:(*id)arg4 ;
-(id)initWithFileURL:(id)arg0 mergeableValueID:(id)arg1 metadata:(id)arg2 options:(id)arg3 error:(*id)arg4 ;
-(id)initWithStorage:(id)arg0 optionsByReaderWriterClass:(id)arg1 mergeableValueID:(id)arg2 metadata:(id)arg3 formatVersion:(unsigned char)arg4 error:(*id)arg5 ;
-(id)initWriterWithMergeableValueID:(id)arg0 metadata:(id)arg1 formatVersion:(unsigned char)arg2 error:(*id)arg3 ;
-(id)initWriterWithMergeableValueID:(id)arg0 metadata:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(id)initWriterWithMergeableValueID:(id)arg0 metadata:(id)arg1 version:(unsigned char)arg2 ;
-(id)splitWithMaximumSize:(NSUInteger)arg0 atomic:(BOOL)arg1 error:(*id)arg2 ;
-(id)splitWithMaximumSize:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)writableCopy;
-(id)writableCopyWithMergeableValueID:(id)arg0 metadata:(id)arg1 ;
-(id)writerOptions;
-(void)appendAtomWithBlock:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateAtomsWithOptions:(id)arg0 usingBlock:(id)arg1 ;
-(void)finishWriting;


@end


#endif