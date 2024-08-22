// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXAPPLAUNCHLOGGER_H
#define ATXAPPLAUNCHLOGGER_H

@class NSString;
@protocol ATXPeriodicLoggerSource;


#import "ATXAbstractVersionedDatabase.h"

@interface ATXAppLaunchLogger : ATXAbstractVersionedDatabase <ATXPeriodicLoggerSource>

 {
    BOOL _enabled;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(NSInteger)latestVersion;
-(id)_init;
-(id)createCustomSchema;
-(id)getMetrics;
-(void)logAppLaunchFrom:(NSUInteger)arg0 at:(id)arg1 ;
-(void)setEnabled:(BOOL)arg0 ;


@end


#endif