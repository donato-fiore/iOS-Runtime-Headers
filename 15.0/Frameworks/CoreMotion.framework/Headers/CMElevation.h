// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMELEVATION_H
#define CMELEVATION_H


#import <Foundation/Foundation.h>

#import "CMAltimeterInternal.h"

@interface CMElevation : NSObject

@property (readonly, nonatomic) CMAltimeterInternal *_internal; // ivar: _internal


+(BOOL)isElevationAvailable;
-(id)init;
-(void)dealloc;
-(void)startElevationUpdatesWithHandler:(id)arg0 ;
-(void)stopElevationUpdates;


@end


#endif