// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPPBLABELEDSOCIALPROFILE_H
#define PPPBLABELEDSOCIALPROFILE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface PPPBLabeledSocialProfile : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasLabel;
@property (readonly, nonatomic) BOOL hasService;
@property (readonly, nonatomic) BOOL hasUrlString;
@property (readonly, nonatomic) BOOL hasUserIdentifier;
@property (readonly, nonatomic) BOOL hasUsername;
@property (retain, nonatomic) NSString *label; // ivar: _label
@property (retain, nonatomic) NSString *service; // ivar: _service
@property (retain, nonatomic) NSString *urlString; // ivar: _urlString
@property (retain, nonatomic) NSString *userIdentifier; // ivar: _userIdentifier
@property (retain, nonatomic) NSString *username; // ivar: _username


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