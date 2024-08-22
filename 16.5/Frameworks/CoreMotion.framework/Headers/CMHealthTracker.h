// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMHEALTHTRACKER_H
#define CMHEALTHTRACKER_H


#import <Foundation/Foundation.h>

#import "CMHealthTrackerInternal.h"

@interface CMHealthTracker : NSObject

@property (readonly, nonatomic) CMHealthTrackerInternal *_internal; // ivar: _internal


+(BOOL)isMetMinutesAvailable;
+(BOOL)isVO2MaxDataAvailable;
+(NSInteger)isAuthorizedForMetMinutes;
+(NSInteger)isAuthorizedForVO2MaxData;
-(id)init;
-(void)dealloc;
-(void)queryMetMinutesFromDate:(id)arg0 toDate:(id)arg1 handler:(id)arg2 ;
-(void)queryVO2MaxInputsFromRecord:(id)arg0 handler:(id)arg1 ;


@end


#endif