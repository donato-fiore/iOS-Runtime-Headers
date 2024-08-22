// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTCOMPANIONSYNCSTATUSPROVIDER_H
#define MTCOMPANIONSYNCSTATUSPROVIDER_H

@class NSString;
@protocol MTPairedDeviceObserver, MTSyncStatusProvider, MTSyncStatusProviderDelegate;

#import <Foundation/Foundation.h>


@interface MTCompanionSyncStatusProvider : NSObject <MTPairedDeviceObserver, MTSyncStatusProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<MTSyncStatusProviderDelegate> *syncStatusProviderDelegate; // ivar: _syncStatusProviderDelegate


+(BOOL)deviceSupportsSyncing;
-(NSUInteger)syncStatus;
-(id)init;
-(void)activePairedDeviceDidChange;


@end


#endif