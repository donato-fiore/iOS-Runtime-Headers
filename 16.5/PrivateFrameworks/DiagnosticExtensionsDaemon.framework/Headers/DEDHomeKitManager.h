// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DEDHOMEKITMANAGER_H
#define DEDHOMEKITMANAGER_H

@class NSString, HMHomeManager;

#import <Foundation/Foundation.h>


@interface DEDHomeKitManager : NSObject

@property (readonly) NSString *homeKitIdentifier;
@property (retain) HMHomeManager *homeKitManager; // ivar: _homeKitManager
@property (readonly) NSString *homeTheaterSystemIdentifier;
@property (readonly) NSString *homeTheaterSystemName;


+(id)sharedInstance;
-(BOOL)isHomeKitResident;
-(id)stringForAirPlayPreference:(id)arg0 ;
-(void)start;


@end


#endif