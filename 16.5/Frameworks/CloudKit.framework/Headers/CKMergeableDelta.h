// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKMERGEABLEDELTA_H
#define CKMERGEABLEDELTA_H

@class NSData, CKDSStorage, NSString, NSURL, CKMergeableDeltaMetadata, CKMergeableValueID;
@protocol CKPropertiesDescription, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "CKAsset.h"
#import "CKMergeableDeltaID.h"

@interface CKMergeableDelta : NSObject <CKPropertiesDescription, NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSData *_data; // ivar: __data
@property (retain, nonatomic) CKAsset *asset; // ivar: _asset
@property (retain, nonatomic) CKDSStorage *atomBatchStorage; // ivar: _atomBatchStorage
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) CKMergeableDeltaID *deltaID;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger encryptMetadataTernary; // ivar: _encryptMetadataTernary
@property (retain, nonatomic) NSData *encryptedData; // ivar: _encryptedData
@property (copy, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CKMergeableDeltaMetadata *metadata; // ivar: _metadata
@property (readonly) Class superclass;
@property (copy, nonatomic) CKMergeableValueID *valueID; // ivar: _valueID


+(BOOL)supportsSecureCoding;
+(NSInteger)suggestedDeltaSizeForContainer:(id)arg0 ;
+(NSUInteger)maxInlineDeltaSize;
+(NSUInteger)maxInlineDeltaSizeForContainer:(id)arg0 ;
-(BOOL)contentSize:(*NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)protobufSize:(*NSUInteger)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataBackedDeltaWithError:(*id)arg0 ;
-(id)dataWithError:(*id)arg0 ;
-(id)init;
-(id)initWithAtomBatch:(id)arg0 error:(*id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 metadata:(id)arg1 ;
-(id)initWithFileURL:(id)arg0 metadata:(id)arg1 ;
-(id)initWithValueID:(id)arg0 metadata:(id)arg1 ;
-(id)initWithValueID:(id)arg0 metadata:(id)arg1 asset:(id)arg2 ;
-(id)initWithValueID:(id)arg0 metadata:(id)arg1 data:(id)arg2 ;
-(id)initWithValueID:(id)arg0 metadata:(id)arg1 encryptedData:(id)arg2 ;
-(id)initWithValueID:(id)arg0 metadata:(id)arg1 fileURL:(id)arg2 ;
-(id)redactedDescription;
-(void)CKDescribePropertiesUsing:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)populateAssetIfNecessaryWithMaxInlineSize:(NSUInteger)arg0 ;
-(void)unpopulateAsset;


@end


#endif