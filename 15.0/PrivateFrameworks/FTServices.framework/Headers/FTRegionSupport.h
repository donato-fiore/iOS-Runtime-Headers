// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTREGIONSUPPORT_H
#define FTREGIONSUPPORT_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "FTMessageDelivery.h"

@interface FTRegionSupport : NSObject

@property (retain) FTMessageDelivery *delivery; // ivar: _delivery
@property (readonly) BOOL isLoaded;
@property (readonly) BOOL isLoading;
@property (retain) NSArray *regions; // ivar: _regions


+(id)sharedInstance;
-(id)regionForID:(id)arg0 ;
-(void)_buildMessageDeliveryIfNeeded;
-(void)dealloc;
-(void)flushRegions;
-(void)startLoading;


@end


#endif