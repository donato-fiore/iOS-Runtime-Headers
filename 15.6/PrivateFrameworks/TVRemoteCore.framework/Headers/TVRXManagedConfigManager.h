// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVRXMANAGEDCONFIGMANAGER_H
#define TVRXMANAGEDCONFIGMANAGER_H

@class NSSet, NSArray, NSString;
@protocol MCProfileConnectionObserver;

#import <Foundation/Foundation.h>


@interface TVRXManagedConfigManager : NSObject <MCProfileConnectionObserver>



@property (retain, nonatomic) NSSet *allowedDeviceNames; // ivar: _allowedDeviceNames
@property (retain, nonatomic) NSArray *allowedTVs; // ivar: _allowedTVs
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isManagedConfigProfileInstalled) BOOL managedConfigProfileInstalled;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)allowedDeviceWithName:(id)arg0 ;
-(id)_convertMACAddressesToData:(id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)profileConnectionDidReceiveProfileListChangedNotification:(id)arg0 userInfo:(id)arg1 ;
-(void)refreshState;


@end


#endif