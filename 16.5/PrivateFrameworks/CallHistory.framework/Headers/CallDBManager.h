// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALLDBMANAGER_H
#define CALLDBMANAGER_H

@class NSString;
@protocol CHDeviceObserverDelegate;

#import <Foundation/Foundation.h>

#import "DBManager.h"
#import "CHDeviceObserver.h"

@interface CallDBManager : NSObject <CHDeviceObserverDelegate>



@property unsigned char dataStoreType; // ivar: _dataStoreType
@property (retain, nonatomic) DBManager *dbManager; // ivar: _dbManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CHDeviceObserver *deviceObserver; // ivar: _deviceObserver
@property BOOL deviceUnlocked; // ivar: _deviceUnlocked
@property (readonly) NSUInteger hash;
@property unsigned char notifyDataStoreChangeReason; // ivar: _notifyDataStoreChangeReason
@property (readonly) Class superclass;


+(id)dataStoreName;
+(id)getDBLocationIsSandboxed:(BOOL)arg0 isTemporary:(BOOL)arg1 error:(*unsigned char)arg2 ;
+(id)modelURL;
-(BOOL)notifyDataStoreChanged;
-(BOOL)shouldCreatePermanent;
-(BOOL)shouldCreateTemporary;
-(id)createManagedObjectContext;
-(id)init;
-(id)permDBLocation:(*unsigned char)arg0 ;
-(id)tempDBLocation:(*unsigned char)arg0 ;
-(void)createDataStore;
-(void)createPermanent;
-(void)createTemporary;
-(void)didChangeBootLockEnabledForDeviceObserver:(id)arg0 ;
-(void)handlePermanentCreated;
-(void)handleTemporaryCreated;
-(void)moveCallsFromTempDatabase;


@end


#endif