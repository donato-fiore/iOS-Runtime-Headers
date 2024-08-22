// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BLTPAIREDSYNCSTATE_H
#define BLTPAIREDSYNCSTATE_H


#import <Foundation/Foundation.h>


@interface BLTPairedSyncState : NSObject

@property (readonly, nonatomic, getter=isInitialSyncComplete) BOOL initialSyncComplete; // ivar: _initialSyncComplete
@property (nonatomic) NSUInteger state; // ivar: _state
@property (readonly, nonatomic, getter=isSyncRestricted) BOOL syncRestricted;
@property (readonly, nonatomic, getter=isTrafficRestricted) BOOL trafficRestricted;


+(id)sharedInstance;
-(BOOL)becameSyncUnrestricted:(id)arg0 ;
-(BOOL)becameTrafficUnrestricted:(id)arg0 ;
-(void)leaveState:(NSUInteger)arg0 ;


@end


#endif