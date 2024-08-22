// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DKDEVICEACTIVITYSTANDINGQUERY_H
#define _DKDEVICEACTIVITYSTANDINGQUERY_H

@class NSString;
@protocol _DKStandingQuery, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface _DKDeviceActivityStandingQuery : NSObject <_DKStandingQuery>



@property (retain, nonatomic) NSObject<OS_xpc_object> *activity; // ivar: activity
@property (retain, nonatomic) NSString *queryIdentifier; // ivar: queryIdentifier


-(id)fetchResult;
-(id)fetchResultForDayOfWeek:(NSInteger)arg0 ;
-(id)fetchResultForDayOfWeek:(NSInteger)arg0 withStorage:(id)arg1 ;
-(id)fetchResultFromStorage:(id)arg0 ;
-(id)init;
-(void)executeWithStorage:(id)arg0 ;
-(void)executeWithStorage:(id)arg0 referenceDate:(id)arg1 ;


@end


#endif