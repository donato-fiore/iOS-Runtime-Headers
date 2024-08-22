// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HULOCATIONDEVICEMANAGER_H
#define HULOCATIONDEVICEMANAGER_H

@class NAFuture, NSString, FMFSession, NSHashTable;
@protocol FMFSessionDelegate;

#import <Foundation/Foundation.h>


@interface HULocationDeviceManager : NSObject <FMFSessionDelegate>



@property (retain, nonatomic) NAFuture *activeFMFDeviceFuture; // ivar: _activeFMFDeviceFuture
@property (readonly, nonatomic) NAFuture *activeLocationDeviceFuture;
@property (retain, nonatomic) NAFuture *availableFMFDevicesFuture; // ivar: _availableFMFDevicesFuture
@property (readonly, nonatomic) NAFuture *availableLocationDevicesFuture;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) FMFSession *fmfSession; // ivar: _fmfSession
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSHashTable *observers; // ivar: _observers
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)init;
-(id)updateActiveLocationDevice:(id)arg0 ;
-(void)_updateActiveFMFDevice:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)didChangeActiveLocationSharingDevice:(id)arg0 ;
-(void)didUpdateActiveDeviceList:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif