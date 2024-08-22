// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBFINDDEVICEANDPLAYSOUNDINTENTRESPONSE_H
#define _INPBFINDDEVICEANDPLAYSOUNDINTENTRESPONSE_H

@class PBCodable, NSString, NSArray;
@protocol _INPBFindDeviceAndPlaySoundIntentResponse, NSSecureCoding, NSCopying;



@interface _INPBFindDeviceAndPlaySoundIntentResponse : PBCodable <_INPBFindDeviceAndPlaySoundIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *devicesFounds; // ivar: _devicesFounds
@property (readonly, nonatomic) NSUInteger devicesFoundsCount;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(Class)devicesFoundType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)devicesFoundAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)addDevicesFound:(id)arg0 ;
-(void)clearDevicesFounds;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif