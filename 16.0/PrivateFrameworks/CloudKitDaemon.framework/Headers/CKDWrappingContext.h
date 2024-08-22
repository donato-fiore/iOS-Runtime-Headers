// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDWRAPPINGCONTEXT_H
#define CKDWRAPPINGCONTEXT_H

@class NSString, NSData, CKMergeableDeltaID, CKRecordID;

#import <Foundation/Foundation.h>


@interface CKDWrappingContext : NSObject

@property (retain, nonatomic) NSString *fieldName; // ivar: _fieldName
@property (retain, nonatomic) NSData *fileSignature; // ivar: _fileSignature
@property (retain, nonatomic) CKMergeableDeltaID *mergeableDeltaID; // ivar: _mergeableDeltaID
@property (retain, nonatomic) CKRecordID *recordID; // ivar: _recordID
@property (retain, nonatomic) NSData *referenceSignature; // ivar: _referenceSignature


-(id)assetContextString;
-(id)encryptedDataContextString;
-(id)initWithRecordID:(id)arg0 fieldName:(id)arg1 mergeableDeltaID:(id)arg2 fileSignature:(id)arg3 referenceSignature:(id)arg4 ;


@end


#endif