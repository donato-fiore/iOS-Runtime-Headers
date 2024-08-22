// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _VLLOCALIZERALTITUDEQUERY_H
#define _VLLOCALIZERALTITUDEQUERY_H

@class CLLocation;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _VLLocalizerAltitudeQuery : NSObject

@property (readonly, nonatomic) id *callback; // ivar: _callback
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (readonly, nonatomic) CLLocation *location; // ivar: _location
@property (readonly, nonatomic) NSUInteger signpostID; // ivar: _signpostID


-(id)init;
-(id)initWithLocation:(id)arg0 callbackQueue:(id)arg1 callback:(id)arg2 ;


@end


#endif