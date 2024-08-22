// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVRXDEVICELOCATOR_H
#define TVRXDEVICELOCATOR_H

@class NSString, NSMutableDictionary;
@protocol TVRXDeviceQueryDelegate;

#import <Foundation/Foundation.h>

#import "TVRXDeviceQuery.h"

@interface TVRXDeviceLocator : NSObject <TVRXDeviceQueryDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TVRXDeviceQuery *query; // ivar: _query
@property (retain, nonatomic) NSMutableDictionary *searches; // ivar: _searches
@property (readonly) Class superclass;


-(id)init;
-(void)_timerExpired:(id)arg0 ;
-(void)cancelSearchForDeviceWithIdentifier:(id)arg0 ;
-(void)deviceQueryDidUpdateDevices:(id)arg0 ;
-(void)findDeviceWithIdentifier:(id)arg0 timeout:(CGFloat)arg1 completion:(id)arg2 ;


@end


#endif