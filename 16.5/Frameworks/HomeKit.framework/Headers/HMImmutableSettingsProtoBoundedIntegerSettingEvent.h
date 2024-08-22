// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMIMMUTABLESETTINGSPROTOBOUNDEDINTEGERSETTINGEVENT_H
#define HMIMMUTABLESETTINGSPROTOBOUNDEDINTEGERSETTINGEVENT_H

@class PBCodable;
@protocol NSCopying;


#import "HMImmutableSettingsProtoIntegerValueEvent.h"

@interface HMImmutableSettingsProtoBoundedIntegerSettingEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasMaxValue;
@property (nonatomic) BOOL hasMinValue;
@property (nonatomic) BOOL hasStepValue;
@property (readonly, nonatomic) BOOL hasValue;
@property (nonatomic) NSInteger maxValue; // ivar: _maxValue
@property (nonatomic) NSInteger minValue; // ivar: _minValue
@property (nonatomic) NSInteger stepValue; // ivar: _stepValue
@property (retain, nonatomic) HMImmutableSettingsProtoIntegerValueEvent *value; // ivar: _value


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