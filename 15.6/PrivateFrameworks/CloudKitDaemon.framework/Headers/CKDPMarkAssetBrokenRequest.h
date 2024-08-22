// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDPMARKASSETBROKENREQUEST_H
#define CKDPMARKASSETBROKENREQUEST_H

@class PBRequest, NSString, CKDPRecordIdentifier, NSMutableArray;
@protocol NSCopying;



@interface CKDPMarkAssetBrokenRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *affectedRecordType; // ivar: _affectedRecordType
@property (retain, nonatomic) CKDPRecordIdentifier *brokenAssetRecordID; // ivar: _brokenAssetRecordID
@property (retain, nonatomic) NSString *fieldName; // ivar: _fieldName
@property (retain, nonatomic) NSMutableArray *fileSignatures; // ivar: _fileSignatures
@property (readonly, nonatomic) BOOL hasAffectedRecordType;
@property (readonly, nonatomic) BOOL hasBrokenAssetRecordID;
@property (readonly, nonatomic) BOOL hasFieldName;
@property (nonatomic) BOOL hasIsPackage;
@property (nonatomic) BOOL hasListIndex;
@property (nonatomic) BOOL hasSkipWriteMissingAssetStatusRecord;
@property (nonatomic) BOOL isPackage; // ivar: _isPackage
@property (nonatomic) int listIndex; // ivar: _listIndex
@property (retain, nonatomic) NSMutableArray *referenceSignatures; // ivar: _referenceSignatures
@property (nonatomic) BOOL skipWriteMissingAssetStatusRecord; // ivar: _skipWriteMissingAssetStatusRecord


+(Class)fileSignatureType;
+(Class)referenceSignatureType;
+(id)options;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)fileSignatureAtIndex:(NSUInteger)arg0 ;
-(id)referenceSignatureAtIndex:(NSUInteger)arg0 ;
-(void)addFileSignature:(id)arg0 ;
-(void)addReferenceSignature:(id)arg0 ;
-(void)clearFileSignatures;
-(void)clearReferenceSignatures;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif