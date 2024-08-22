// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DEFAULTMAPLOCATION_H
#define DEFAULTMAPLOCATION_H



#import "MapLocation.h"

@interface DefaultMapLocation : MapLocation



-(BOOL)hasValidCoordinate;
-(BOOL)isResolved;
-(BOOL)isResolving;
-(void)resolveWithCompletionHandler:(id)arg0 ;


@end


#endif