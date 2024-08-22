// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCODABLEAUTHORIZATIONCOMPLETEMESSAGE_H
#define HDCODABLEAUTHORIZATIONCOMPLETEMESSAGE_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface HDCodableAuthorizationCompleteMessage : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *appBundleIdentifier; // ivar: _appBundleIdentifier
@property (retain, nonatomic) NSString *errorDescription; // ivar: _errorDescription
@property (readonly, nonatomic) BOOL hasAppBundleIdentifier;
@property (readonly, nonatomic) BOOL hasErrorDescription;
@property (readonly, nonatomic) BOOL hasRequestIdentifier;
@property (retain, nonatomic) NSData *requestIdentifier; // ivar: _requestIdentifier


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