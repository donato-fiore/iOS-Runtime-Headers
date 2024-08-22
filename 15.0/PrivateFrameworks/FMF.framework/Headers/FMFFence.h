// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FMFFENCE_H
#define FMFFENCE_H

@class NSString, NSArray, NSDate, CLLocation;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "FMFPlacemark.h"
#import "FMFSchedule.h"

@interface FMFFence : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSString *acceptanceStatus; // ivar: _acceptanceStatus
@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (retain, nonatomic) NSString *ckRecordName; // ivar: _ckRecordName
@property (retain, nonatomic) NSString *ckRecordZoneOwnerName; // ivar: _ckRecordZoneOwnerName
@property (retain, nonatomic) NSString *createdByIdentifier; // ivar: _createdByIdentifier
@property (readonly, nonatomic) NSString *displayLocationName;
@property (retain, nonatomic) NSArray *followerIds; // ivar: _followerIds
@property (retain, nonatomic) NSString *friendIdentifier; // ivar: _friendIdentifier
@property (nonatomic, getter=isFromMe) BOOL fromMe; // ivar: _fromMe
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic, getter=inviteDate) NSDate *inviteDate;
@property (readonly, nonatomic, getter=isMuted) BOOL isMuted;
@property (retain, nonatomic) NSString *label; // ivar: _label
@property (retain, nonatomic) CLLocation *location; // ivar: _location
@property (nonatomic) NSUInteger locationType; // ivar: _locationType
@property (retain, nonatomic) NSDate *muteEndDate; // ivar: _muteEndDate
@property (readonly, nonatomic, getter=isOnMe) BOOL onMe;
@property (retain, nonatomic) NSString *pendingIdentifier; // ivar: _pendingIdentifier
@property (retain, nonatomic) FMFPlacemark *placemark; // ivar: _placemark
@property (retain, nonatomic) NSArray *recipients; // ivar: _recipients
@property (nonatomic, getter=isRecurring) BOOL recurring; // ivar: _recurring
@property (readonly, nonatomic, getter=isRegionAllowed) BOOL regionAllowed;
@property (retain, nonatomic) FMFSchedule *schedule; // ivar: _schedule
@property (readonly, getter=isSupported) BOOL supported;
@property (retain, nonatomic) NSDate *timestamp; // ivar: _timestamp
@property (retain, nonatomic) NSString *trigger; // ivar: _trigger
@property (retain, nonatomic) NSString *type; // ivar: _type
@property (readonly, nonatomic, getter=shouldUseCloudKitStore) BOOL useCloudKitStore;
@property (readonly, nonatomic, getter=shouldUseIDSTrigger) BOOL useIDSTrigger;


+(BOOL)isAllowedAtLocation:(struct CLLocationCoordinate2D )arg0 ;
+(BOOL)supportsSecureCoding;
+(id)endDateForMuteTimespan:(NSUInteger)arg0 ;
+(id)genericFriendName;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)handlesForArray:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithRecipient:(id)arg0 location:(id)arg1 placemark:(id)arg2 label:(id)arg3 trigger:(id)arg4 type:(id)arg5 locationType:(NSUInteger)arg6 recurring:(BOOL)arg7 ;
-(id)localizedNotificationStringForFollower:(id)arg0 locationName:(id)arg1 ;
-(id)localizedRequestNotificationStringForFollower:(id)arg0 locationName:(id)arg1 ;
-(id)localizedSubtitleStringWithLocationName:(id)arg0 ;
-(id)localizedWillBeNotifiedStringForFollower:(id)arg0 locationName:(id)arg1 ;
-(id)locationForDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateFenceLocation:(id)arg0 placemark:(id)arg1 label:(id)arg2 trigger:(id)arg3 type:(id)arg4 locationType:(NSUInteger)arg5 ;
-(void)updateFenceMuteEndDate:(id)arg0 ;


@end


#endif