// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCPRIVATERECORDSYNCMANAGER_H
#define FCPRIVATERECORDSYNCMANAGER_H

@class CKRecordID, NSArray, NTPBPrivateRecordSyncState, NSString, NSDate;
@protocol FCPrivateDataSyncManager, FCPrivateRecordSyncManagerDelegate;

#import <Foundation/Foundation.h>


@interface FCPrivateRecordSyncManager : NSObject <FCPrivateDataSyncManager>

 {
    CKRecordID *_recordID;
    id<FCPrivateRecordSyncManagerDelegate> *_delegate;
    NSArray *_desiredKeys;
    NTPBPrivateRecordSyncState *_currentState;
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