// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSYSYNCSESSION_H
#define PSYSYNCSESSION_H

@class NSDictionary, NSArray, NSUUID;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PSYSyncSession : NSObject <NSCopying, NSSecureCoding>

 {
    NSDictionary *_activityMap;
}


@property (retain, nonatomic) NSArray *activities; // ivar: _activities
@property (retain, nonatomic) NSUUID *pairingIdentifier; // ivar: _pairingIdentifier
@property (retain, nonatomic) NSUUID *sessionIdentifier; // ivar: _sessionIdentifier
@property (readonly, nonatomic) CGFloat sessionProgress;
@property (nonatomic) BOOL supportsMigrationSync; // ivar: _supportsMigrationSync
@property (nonatomic) NSInteger switchIndex; // ivar: _switchIndex
@property (nonatomic) NSUInteger syncSessionState; // ivar: _syncSessionState
@property (nonatomic) NSUInteger syncSessionType; // ivar: _syncSessionType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_deepCopy;
-(id)activityForLabel:(id)arg0 ;
-(id)activityForService:(id)arg0 ;
-(id)completedActivities;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)firstIncompleteActivity;
-(id)incompleteActivities;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPairingIdentifier:(id)arg0 switchIndex:(NSInteger)arg1 sessionIdentifier:(id)arg2 syncSessionType:(NSUInteger)arg3 supportsMigrationSync:(BOOL)arg4 activities:(id)arg5 state:(NSUInteger)arg6 ;
-(id)syncSessionByReplacingActivity:(id)arg0 ;
-(id)syncSessionByUpdatingActivities:(id)arg0 ;
-(id)syncSessionByUpdatingSyncSessionState:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif