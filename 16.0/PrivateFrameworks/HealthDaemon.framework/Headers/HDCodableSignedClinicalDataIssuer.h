// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCODABLESIGNEDCLINICALDATAISSUER_H
#define HDCODABLESIGNEDCLINICALDATAISSUER_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "HDCodableMessageVersion.h"

@interface HDCodableSignedClinicalDataIssuer : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasMessageVersion;
@property (readonly, nonatomic) BOOL hasSubtitle;
@property (readonly, nonatomic) BOOL hasTitle;
@property (readonly, nonatomic) BOOL hasWellKnownURL;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) HDCodableMessageVersion *messageVersion; // ivar: _messageVersion
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) NSString *wellKnownURL; // ivar: _wellKnownURL


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