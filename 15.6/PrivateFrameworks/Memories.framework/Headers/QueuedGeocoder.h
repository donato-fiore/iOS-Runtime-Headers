// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QUEUEDGEOCODER_H
#define QUEUEDGEOCODER_H

@class CLGeocoder, NSMapTable, NSRecursiveLock;

#import <Foundation/Foundation.h>

#import "GeocodeRequest.h"
#import "VEKReachability.h"

@interface QueuedGeocoder : NSObject

@property (retain, nonatomic) GeocodeRequest *currentRequest; // ivar: _currentRequest
@property (retain, nonatomic) CLGeocoder *geocoder; // ivar: _geocoder
@property (retain, nonatomic) NSMapTable *locationToPlacemarksMap; // ivar: _locationToPlacemarksMap
@property (retain, nonatomic) NSMapTable *locationToResultMap; // ivar: _locationToResultMap
@property (retain, nonatomic) NSRecursiveLock *lock; // ivar: _lock
@property (nonatomic) CGFloat placemarkDifferentationDistance; // ivar: _placemarkDifferentationDistance
@property (retain, nonatomic) VEKReachability *reachability; // ivar: _reachability


+(id)sharedGeocoder;
-(id)_init;
-(id)init;
-(void)dequeueRequest;
-(void)reverseGeocodeLocation:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif