// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKCLOUDSYNCZONEDESCRIPTION_H
#define HKCLOUDSYNCZONEDESCRIPTION_H

@class NSArray, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HKCloudSyncShareParticipantDescription.h"
#import "HKCloudSyncRecordZoneIDDescription.h"

@interface HKCloudSyncZoneDescription : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *otherParticipantsDescription; // ivar: _otherParticipantsDescription
@property (readonly, copy, nonatomic) HKCloudSyncShareParticipantDescription *ownerParticipantDescription; // ivar: _ownerParticipantDescription
@property (readonly, copy, nonatomic) NSArray *recordDescriptions; // ivar: _recordDescriptions
@property (readonly, copy, nonatomic) NSString *type; // ivar: _type
@property (readonly, copy, nonatomic) HKCloudSyncRecordZoneIDDescription *zoneIDDescription; // ivar: _zoneIDDescription


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithZoneIDDescription:(id)arg0 type:(id)arg1 ownerParticipantDescription:(id)arg2 otherParticipantsDescription:(id)arg3 recordDescriptions:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif