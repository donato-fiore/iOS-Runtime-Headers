// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVROUTINGSESSIONDESTINATION_H
#define AVROUTINGSESSIONDESTINATION_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "AVRoutingSessionDestinationInternal.h"

@interface AVRoutingSessionDestination : NSObject {
    AVRoutingSessionDestinationInternal *_ivars;
}


@property (readonly, nonatomic) NSArray *outputDeviceDescriptions;
@property (readonly, nonatomic) float probability;
@property (readonly, nonatomic) BOOL providesExternalVideoPlayback;


-(BOOL)_canQueryOutputDeviceDescriptionsAndReturnCurrentValue:(*id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithFigRoutingSessionDestination:(struct __CFDictionary *)arg0 ;
-(void)dealloc;


@end


#endif