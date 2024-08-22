// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDASSETID_H
#define CKDASSETID_H

@class NSData, CKDPRecordIdentifier, NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CKDAssetID : NSObject <NSCopying>



@property (readonly, nonatomic) NSData *fileSignature; // ivar: _fileSignature
@property (readonly, nonatomic) CKDPRecordIdentifier *recordID; // ivar: _recordID
@property (readonly, nonatomic) NSData *referenceSignature; // ivar: _referenceSignature
@property (readonly, nonatomic) NSNumber *size; // ivar: _size


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)CKPropertiesDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithRecordID:(id)arg0 fileSignature:(id)arg1 referenceSignature:(id)arg2 size:(id)arg3 ;


@end


#endif