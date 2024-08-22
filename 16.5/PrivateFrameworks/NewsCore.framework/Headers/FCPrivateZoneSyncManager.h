// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCPRIVATEZONESYNCMANAGER_H
#define FCPRIVATEZONESYNCMANAGER_H

@class CKRecordZoneID, NSArray, NTPBPrivateZoneSyncState, NSString, NSDate;
@protocol FCPrivateDataSyncManager, FCPrivateZoneSyncManagerDelegate;

#import <Foundation/Foundation.h>


@interface FCPrivateZoneSyncManager : NSObject <FCPrivateDataSyncManager>

 {
    BOOL _requiresBatchedSync;
    CKRecordZoneID *_recordZoneID;
    id<FCPrivateZoneSyncManagerDelegate> *_delegate;
    NSArray *_desiredKeys;
    NTPBPrivateZoneSyncState *_currentState;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDate *lastCleanDate;
@property (readonly) Class superclass;


-(BOOL)isAwaitingFirstSync;
-(BOOL)isDirty;
-(id)init;
-(void)fetchChangesWithContext:(id)arg0 qualityOfService:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)markAsDirty;
-(void)notifyObservers;


@end


#endif