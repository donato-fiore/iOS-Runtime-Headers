// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCCKPRESPONSEOPERATIONRESULTERROREXTENSION_H
#define FCCKPRESPONSEOPERATIONRESULTERROREXTENSION_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface FCCKPResponseOperationResultErrorExtension : PBCodable <NSCopying>

 {
    NSString *_extensionName;
    NSData *_extensionPayload;
    unsigned int _typeCode;
    ? _has;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif