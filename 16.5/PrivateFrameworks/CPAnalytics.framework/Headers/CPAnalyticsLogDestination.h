// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPANALYTICSLOGDESTINATION_H
#define CPANALYTICSLOGDESTINATION_H

@class NSString, NSArray;
@protocol CPAnalyticsDestination, OS_os_log;

#import <Foundation/Foundation.h>


@interface CPAnalyticsLogDestination : NSObject <CPAnalyticsDestination>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL disabled;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (readonly, nonatomic) NSArray *logEventMatchers; // ivar: _logEventMatchers
@property (readonly) Class superclass;


-(id)_descriptionComponentsForEvent:(id)arg0 forProperties:(id)arg1 ;
-(id)_logEventMatchersInConfiguration:(id)arg0 ;
-(id)init;
-(id)initWithConfig:(id)arg0 cpAnalyticsInstance:(id)arg1 ;
-(void)logEvent:(id)arg0 withLabel:(id)arg1 shouldLogEventName:(BOOL)arg2 propertiesToLog:(id)arg3 publicPropertiesToLog:(id)arg4 ;
-(void)processEvent:(id)arg0 ;
-(void)updateWithConfig:(id)arg0 ;


@end


#endif