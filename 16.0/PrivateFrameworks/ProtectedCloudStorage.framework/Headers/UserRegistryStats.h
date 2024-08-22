// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef USERREGISTRYSTATS_H
#define USERREGISTRYSTATS_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface UserRegistryStats : NSObject <NSSecureCoding>



@property NSInteger fetchRecordZoneChanges; // ivar: _fetchRecordZoneChanges
@property NSInteger lastfetchRecordZoneChangesAtStart; // ivar: _lastfetchRecordZoneChangesAtStart
@property NSInteger pushNotifications; // ivar: _pushNotifications
@property NSInteger recordFetch; // ivar: _recordFetch
@property NSInteger recordModify; // ivar: _recordModify
@property NSInteger zoneReset; // ivar: _zoneReset


+(BOOL)supportsSecureCoding;
-(id)getUserRegistryStats;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)printUserRegistryStats:(struct __sFILE *)arg0 ;


@end


#endif