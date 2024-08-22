// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TTMERGEABLESTRINGVERSIONEDDOCUMENT_H
#define TTMERGEABLESTRINGVERSIONEDDOCUMENT_H

@class NSString;
@protocol REMReplicaClockProviding;


#import "TTVersionedDocument.h"
#import "TTMergeableAttributedString.h"

@interface TTMergeableStringVersionedDocument : TTVersionedDocument <REMReplicaClockProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TTMergeableAttributedString *mergeableString; // ivar: _mergeableString
@property (readonly) Class superclass;


+(unsigned int)minimumSupportedVersion;
+(unsigned int)serializationVersion;
-(BOOL)rem_isEqual:(id)arg0 ;
-(NSUInteger)mergeWithStringVersionedDocument:(id)arg0 ;
-(id)clockElementListForReplicaUUID:(id)arg0 ;
-(id)initWithArchive:(*void)arg0 andReplicaID:(id)arg1 ;
-(id)initWithData:(id)arg0 andReplicaID:(id)arg1 ;
-(id)initWithMergeableString:(id)arg0 ;
-(id)rem_copyWithReplicaIDForNewEdits:(id)arg0 ;
-(id)serializeCurrentVersion:(*unsigned int)arg0 ;
-(void)mergeVersion:(unsigned int)arg0 fromData:(id)arg1 ;


@end


#endif