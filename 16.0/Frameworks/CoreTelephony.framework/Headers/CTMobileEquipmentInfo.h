// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CTMOBILEEQUIPMENTINFO_H
#define CTMOBILEEQUIPMENTINFO_H

@class NSString, NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTMobileEquipmentInfo : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSString *CSN; // ivar: _CSN
@property (retain, nonatomic) NSNumber *ERIVersion; // ivar: _ERIVersion
@property (retain, nonatomic) NSString *EUIMID; // ivar: _EUIMID
@property (retain, nonatomic) NSString *ICCID; // ivar: _ICCID
@property (retain, nonatomic) NSString *IMEI; // ivar: _IMEI
@property (retain, nonatomic) NSString *IMSI; // ivar: _IMSI
@property (retain, nonatomic) NSString *MEID; // ivar: _MEID
@property (retain, nonatomic) NSString *MIN; // ivar: _MIN
@property (retain, nonatomic) NSString *NAI; // ivar: _NAI
@property (retain, nonatomic) NSNumber *PRLVersion; // ivar: _PRLVersion
@property (retain, nonatomic) NSString *baseId; // ivar: _baseId
@property (retain, nonatomic) NSString *baseProfile; // ivar: _baseProfile
@property (retain, nonatomic) NSString *baseVersion; // ivar: _baseVersion
@property (retain, nonatomic) NSString *cdmaIMSI; // ivar: _cdmaIMSI
@property (retain, nonatomic) NSString *currentMobileId; // ivar: _currentMobileId
@property (retain, nonatomic) NSString *currentSubscriberId; // ivar: _currentSubscriberId
@property (retain, nonatomic) NSString *displayCSN; // ivar: _displayCSN
@property (retain, nonatomic) NSString *effectiveICCID; // ivar: _effectiveICCID
@property (nonatomic) NSInteger slotId; // ivar: _slotId


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif