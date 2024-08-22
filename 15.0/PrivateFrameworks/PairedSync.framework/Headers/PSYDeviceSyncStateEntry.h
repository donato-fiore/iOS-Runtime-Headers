// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSYDEVICESYNCSTATEENTRY_H
#define PSYDEVICESYNCSTATEENTRY_H

@class NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PSYDeviceSyncStateEntry : NSObject <NSSecureCoding>



@property (readonly, nonatomic) BOOL hasCompletedInitialSync;
@property (readonly, nonatomic) BOOL hasCompletedSync;
@property (nonatomic) NSUInteger initialSyncState; // ivar: _initialSyncState
@property (nonatomic) unsigned int migrationIndex; // ivar: _migrationIndex
@property (retain, nonatomic) NSUUID *pairingID; // ivar: _pairingID
@property (nonatomic) unsigned int syncSwitchIndex; // ivar: _syncSwitchIndex


+(BOOL)supportsSecureCoding;
-(BOOL)hasCompletedInitialOrMigrationSync;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPairingID:(id)arg0 syncState:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif