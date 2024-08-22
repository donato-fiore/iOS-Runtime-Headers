// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBGETSETTINGINTENTRESPONSE_H
#define _INPBGETSETTINGINTENTRESPONSE_H

@class PBCodable, NSString, NSArray;
@protocol _INPBGetSettingIntentResponse, NSSecureCoding, NSCopying;



@interface _INPBGetSettingIntentResponse : PBCodable <_INPBGetSettingIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *errorDetail; // ivar: _errorDetail
@property (readonly, nonatomic) BOOL hasErrorDetail;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *settingResponseDatas; // ivar: _settingResponseDatas
@property (readonly, nonatomic) NSUInteger settingResponseDatasCount;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(Class)settingResponseDataType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)settingResponseDataAtIndex:(NSUInteger)arg0 ;
-(void)addSettingResponseData:(id)arg0 ;
-(void)clearSettingResponseDatas;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif