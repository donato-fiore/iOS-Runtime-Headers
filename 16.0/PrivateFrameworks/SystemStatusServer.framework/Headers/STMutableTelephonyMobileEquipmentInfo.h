// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STMUTABLETELEPHONYMOBILEEQUIPMENTINFO_H
#define STMUTABLETELEPHONYMOBILEEQUIPMENTINFO_H

@class NSString;


#import "STTelephonyMobileEquipmentInfo.h"

@interface STMutableTelephonyMobileEquipmentInfo : STTelephonyMobileEquipmentInfo

@property (copy, nonatomic) NSString *CSN;
@property (copy, nonatomic) NSString *ICCID;
@property (copy, nonatomic) NSString *IMEI;
@property (copy, nonatomic) NSString *MEID;
@property (copy, nonatomic) NSString *bootstrapICCID;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif