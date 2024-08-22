// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDPRECORDFIELDVALUE_H
#define CKDPRECORDFIELDVALUE_H

@class PBCodable, NSData, CKDPDate, NSMutableArray, CKDPLocationCoordinate, CKDPRecordReference, NSString;
@protocol NSCopying;


#import "CKDPAsset.h"
#import "CKDPEncryptedMergeableValue.h"
#import "CKDPMergeableValue.h"
#import "CKDPPackage.h"
#import "CKDPStreamingAsset.h"

@interface CKDPRecordFieldValue : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) CKDPAsset *assetValue; // ivar: _assetValue
@property (retain, nonatomic) NSData *bytesValue; // ivar: _bytesValue
@property (retain, nonatomic) CKDPDate *dateValue; // ivar: _dateValue
@property (nonatomic) CGFloat doubleValue; // ivar: _doubleValue
@property (retain, nonatomic) CKDPEncryptedMergeableValue *encryptedMergeableValue; // ivar: _encryptedMergeableValue
@property (readonly, nonatomic) BOOL hasAssetValue;
@property (readonly, nonatomic) BOOL hasBytesValue;
@property (readonly, nonatomic) BOOL hasDateValue;
@property (nonatomic) BOOL hasDoubleValue;
@property (readonly, nonatomic) BOOL hasEncryptedMergeableValue;
@property (nonatomic) BOOL hasIsEncrypted;
@property (readonly, nonatomic) BOOL hasLocationValue;
@property (readonly, nonatomic) BOOL hasMergeableValue;
@property (readonly, nonatomic) BOOL hasPackageValue;
@property (readonly, nonatomic) BOOL hasReferenceValue;
@property (nonatomic) BOOL hasSignedValue;
@property (readonly, nonatomic) BOOL hasStreamingAssetValue;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (nonatomic) BOOL hasType;
@property (nonatomic) BOOL isEncrypted; // ivar: _isEncrypted
@property (retain, nonatomic) NSMutableArray *listValues; // ivar: _listValues
@property (retain, nonatomic) CKDPLocationCoordinate *locationValue; // ivar: _locationValue
@property (retain, nonatomic) CKDPMergeableValue *mergeableValue; // ivar: _mergeableValue
@property (retain, nonatomic) CKDPPackage *packageValue; // ivar: _packageValue
@property (retain, nonatomic) CKDPRecordReference *referenceValue; // ivar: _referenceValue
@property (nonatomic) NSInteger signedValue; // ivar: _signedValue
@property (retain, nonatomic) CKDPStreamingAsset *streamingAssetValue; // ivar: _streamingAssetValue
@property (retain, nonatomic) NSString *stringValue; // ivar: _stringValue
@property (nonatomic) int type; // ivar: _type


+(Class)listValueType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)listValueAtIndex:(NSUInteger)arg0 ;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)_CKLogToFileHandle:(id)arg0 atDepth:(int)arg1 ;
-(void)addListValue:(id)arg0 ;
-(void)clearListValues;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif