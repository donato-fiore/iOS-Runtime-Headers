// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NRDEVICEDISCOVERYCONTROLLER_H
#define NRDEVICEDISCOVERYCONTROLLER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface NRDeviceDiscoveryController : NSObject

@property (readonly, nonatomic) NSArray *devices;


+(id)sharedInstance;
-(id)init;
-(void)begin;
-(void)end;
-(void)overrideSignalStrengthLimit:(NSInteger)arg0 ;


@end


#endif