// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRFIELDCONTENTSIGNATURE_H
#define BRFIELDCONTENTSIGNATURE_H

@class PBCodable, NSData, NSString;
@protocol BRFieldVersionSignature, NSCopying;



@interface BRFieldContentSignature : PBCodable <BRFieldVersionSignature, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *contentSignature; // ivar: _contentSignature
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasContentSignature;
@property (readonly, nonatomic) BOOL hasOldVersionIdentifier;
@property (readonly, nonatomic) BOOL hasOldVersionIdentifier;
@property (nonatomic) BOOL hasSize;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *oldVersionIdentifier;
@property (retain, nonatomic) NSString *oldVersionIdentifier; // ivar: _oldVersionIdentifier
@property (nonatomic) NSInteger size; // ivar: _size
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *versionIdentifier;
@property (retain, nonatomic) NSString *versionIdentifier; // ivar: _versionIdentifier


-(BOOL)contentDiffersWithSignature:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEquivalentToSignature:(id)arg0 ;
-(BOOL)isPackage;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)etag;
-(id)initWithLocalVersion:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif