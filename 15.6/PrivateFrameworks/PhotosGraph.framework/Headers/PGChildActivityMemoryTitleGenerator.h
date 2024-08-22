// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGCHILDACTIVITYMEMORYTITLEGENERATOR_H
#define PGCHILDACTIVITYMEMORYTITLEGENERATOR_H

@class NSSet, NSString;
@protocol OS_os_log;


#import "PGTitleGenerator.h"

@interface PGChildActivityMemoryTitleGenerator : PGTitleGenerator {
    NSSet *_activityLabels;
    NSString *_childName;
    NSObject<OS_os_log> *_loggingConnection;
}




-(id)initWithMomentNodes:(id)arg0 activityLabels:(id)arg1 childName:(id)arg2 titleGenerationContext:(id)arg3 loggingConnection:(id)arg4 ;
-(void)_generateTitleAndSubtitleWithResult:(id)arg0 ;


@end


#endif