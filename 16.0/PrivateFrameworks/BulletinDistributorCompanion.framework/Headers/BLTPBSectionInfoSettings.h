// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLTPBSECTIONINFOSETTINGS_H
#define BLTPBSECTIONINFOSETTINGS_H

@class PBCodable;
@protocol NSCopying;


#import "BLTPBMuteAssertion.h"

@interface BLTPBSectionInfoSettings : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int announceSetting; // ivar: _announceSetting
@property (nonatomic) BOOL hasAnnounceSetting;
@property (readonly, nonatomic) BOOL hasMuteAssertion;
@property (nonatomic) BOOL hasScheduledDeliverySetting;
@property (nonatomic) BOOL hasTimeSensitiveSetting;
@property (nonatomic) BOOL hasUserConfiguredTimeSensitiveSetting;
@property (retain, nonatomic) BLTPBMuteAssertion *muteAssertion; // ivar: _muteAssertion
@property (nonatomic) int scheduledDeliverySetting; // ivar: _scheduledDeliverySetting
@property (nonatomic) int timeSensitiveSetting; // ivar: _timeSensitiveSetting
@property (nonatomic) BOOL userConfiguredTimeSensitiveSetting; // ivar: _userConfiguredTimeSensitiveSetting


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