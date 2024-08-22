// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBFLEGACYMIGRATIONANALYTICSREPORTER_H
#define PBFLEGACYMIGRATIONANALYTICSREPORTER_H


#import <Foundation/Foundation.h>


@interface PBFLegacyMigrationAnalyticsReporter : NSObject



+(void)recordWithEvent:(NSInteger)arg0 migrationInfo:(id)arg1 duration:(CGFloat)arg2 errorCode:(NSInteger)arg3 ;
-(id)init;


@end


#endif