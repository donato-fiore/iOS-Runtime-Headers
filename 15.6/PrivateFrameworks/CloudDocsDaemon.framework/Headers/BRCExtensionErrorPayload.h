// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRCEXTENSIONERRORPAYLOAD_H
#define BRCEXTENSIONERRORPAYLOAD_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface BRCExtensionErrorPayload : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasMinimumOSName;
@property (readonly, nonatomic) BOOL hasRecordId;
@property (retain, nonatomic) NSString *minimumOSName; // ivar: _minimumOSName
@property (retain, nonatomic) NSString *recordId; // ivar: _recordId


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