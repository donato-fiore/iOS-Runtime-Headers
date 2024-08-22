// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDWRAPPINGCONTEXT_H
#define CKDWRAPPINGCONTEXT_H

@class NSString, NSData, CKRecordID;

#import <Foundation/Foundation.h>


@interface CKDWrappingContext : NSObject

@property (retain, nonatomic) NSString *fieldName; // ivar: _fieldName
@property (retain, nonatomic) NSData *fileSignature; // ivar: _fileSignature
@property (retain, nonatomic) CKRecordID *recordID; // ivar: _recordID
@property (retain, nonatomic) NSData *referenceSignature; // ivar: _referenceSignature


-(id)assetContextString;
-(id)encryptedDataContextString;
-(id)initWithRecordID:(id)arg0 fieldName:(id)arg1 fileSignature:(id)arg2 referenceSignature:(id)arg3 ;


@end


#endif