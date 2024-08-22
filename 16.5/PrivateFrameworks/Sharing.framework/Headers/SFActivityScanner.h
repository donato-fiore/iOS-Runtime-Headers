// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFACTIVITYSCANNER_H
#define SFACTIVITYSCANNER_H

@class NSString, NSUUID;
@protocol SFContinuityScanManagerObserver, SFActivityScannerDelegate;

#import <Foundation/Foundation.h>


@interface SFActivityScanner : NSObject <SFContinuityScanManagerObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSObject<SFActivityScannerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSUUID *identifier; // ivar: _identifier
@property (readonly) Class superclass;


-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(void)activityPayloadFromDevice:(id)arg0 forAdvertisementPayload:(id)arg1 command:(id)arg2 timeout:(NSInteger)arg3 withCompletionHandler:(id)arg4 ;
-(void)dealloc;
-(void)scanForTypes:(NSUInteger)arg0 ;
-(void)scanManager:(id)arg0 foundDeviceWithDevice:(id)arg1 ;
-(void)scanManager:(id)arg0 lostDeviceWithDevice:(id)arg1 ;
-(void)scanManager:(id)arg0 pairedDevicesChanged:(id)arg1 ;
-(void)scanManager:(id)arg0 receivedAdvertisement:(id)arg1 ;


@end


#endif