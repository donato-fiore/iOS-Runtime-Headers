// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLQUERYSTATS_H
#define PLQUERYSTATS_H

@class NSManagedObjectContext, NSSQLiteDatabaseStatistics;

#import <Foundation/Foundation.h>


@interface PLQueryStats : NSObject {
    NSManagedObjectContext *_context;
    NSSQLiteDatabaseStatistics *_preStats;
}




+(BOOL)allowedToTrack;
+(id)byteCountFormatter;
+(id)startedQueryStatsWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)stopRecordingDescriptionWithFetchCount:(NSInteger)arg0 ;


@end


#endif