// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HKFITNESSFRIENDACHIEVEMENT_H
#define _HKFITNESSFRIENDACHIEVEMENT_H

@class NSDate, NSUUID, NSString, NSNumber;
@protocol NSCopying;


#import "HKSample.h"

@interface _HKFitnessFriendAchievement : HKSample <NSCopying>



@property (retain, nonatomic) NSDate *completedDate; // ivar: _completedDate
@property (retain, nonatomic) NSUUID *friendUUID; // ivar: _friendUUID
@property (retain, nonatomic) NSString *templateUniqueName; // ivar: _templateUniqueName
@property (retain, nonatomic) NSNumber *value; // ivar: _value


+(BOOL)_isConcreteObjectClass;
+(BOOL)supportsSecureCoding;
+(id)achievementWithTemplateUniqueName:(id)arg0 completedDate:(id)arg1 value:(id)arg2 friendUUID:(id)arg3 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif