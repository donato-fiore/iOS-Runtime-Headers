// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMPBTHIRDPARTYAPPCONTENTEVENT_H
#define BMPBTHIRDPARTYAPPCONTENTEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface BMPBThirdPartyAppContentEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat absoluteTimestamp; // ivar: _absoluteTimestamp
@property (retain, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (retain, nonatomic) NSString *comment; // ivar: _comment
@property (retain, nonatomic) NSString *content; // ivar: _content
@property (retain, nonatomic) NSString *contentProtection; // ivar: _contentProtection
@property (retain, nonatomic) NSString *desc; // ivar: _desc
@property (retain, nonatomic) NSString *domainId; // ivar: _domainId
@property (nonatomic) BOOL hasAbsoluteTimestamp;
@property (readonly, nonatomic) BOOL hasBundleId;
@property (readonly, nonatomic) BOOL hasComment;
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly, nonatomic) BOOL hasContentProtection;
@property (readonly, nonatomic) BOOL hasDesc;
@property (readonly, nonatomic) BOOL hasDomainId;
@property (readonly, nonatomic) BOOL hasTitle;
@property (readonly, nonatomic) BOOL hasUniqueId;
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) NSString *uniqueId; // ivar: _uniqueId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif