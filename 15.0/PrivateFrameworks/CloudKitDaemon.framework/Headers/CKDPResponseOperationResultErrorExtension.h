// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDPRESPONSEOPERATIONRESULTERROREXTENSION_H
#define CKDPRESPONSEOPERATIONRESULTERROREXTENSION_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface CKDPResponseOperationResultErrorExtension : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *extensionName; // ivar: _extensionName
@property (retain, nonatomic) NSData *extensionPayload; // ivar: _extensionPayload
@property (readonly, nonatomic) BOOL hasExtensionName;
@property (readonly, nonatomic) BOOL hasExtensionPayload;
@property (nonatomic) BOOL hasTypeCode;
@property (nonatomic) unsigned int typeCode; // ivar: _typeCode


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif