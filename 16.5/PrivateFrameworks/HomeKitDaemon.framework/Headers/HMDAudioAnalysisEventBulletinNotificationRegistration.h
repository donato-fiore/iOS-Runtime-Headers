// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDAUDIOANALYSISEVENTBULLETINNOTIFICATIONREGISTRATION_H
#define HMDAUDIOANALYSISEVENTBULLETINNOTIFICATIONREGISTRATION_H

@class NSUUID;
@protocol NSCopying, NSSecureCoding, HMDBulletinNotificationRegistrationRemoteCoding;


#import "HMDBulletinNotificationRegistration.h"

@interface HMDAudioAnalysisEventBulletinNotificationRegistration : HMDBulletinNotificationRegistration <NSCopying, NSSecureCoding, HMDBulletinNotificationRegistrationRemoteCoding>



@property (readonly, copy) NSUUID *accessoryUUID; // ivar: _accessoryUUID
@property (readonly) NSUInteger audioAnalysisClassifierOptions; // ivar: _audioAnalysisClassifierOptions


+(BOOL)supportsSecureCoding;
+(id)type;
-(BOOL)isEqual:(id)arg0 ;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConditions:(id)arg0 audioAnalysisClassifierOptions:(NSUInteger)arg1 accessoryUUID:(id)arg2 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithLocalBulletinAudioAnalysisRegistration:(id)arg0 ;
-(id)initWithPredicate:(id)arg0 accessoryUUID:(id)arg1 ;
-(id)predicate;
-(id)serializedRegistrationForRemoteMessage;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif