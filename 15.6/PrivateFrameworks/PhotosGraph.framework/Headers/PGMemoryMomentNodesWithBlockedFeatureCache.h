// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGMEMORYMOMENTNODESWITHBLOCKEDFEATURECACHE_H
#define PGMEMORYMOMENTNODESWITHBLOCKEDFEATURECACHE_H

@class PHUserFeedbackCalculator;
@protocol OS_os_log;

#import <Foundation/Foundation.h>

#import "PGGraphMomentNodeCollection.h"

@interface PGMemoryMomentNodesWithBlockedFeatureCache : NSObject {
    PHUserFeedbackCalculator *_userFeedbackCalculator;
    NSObject<OS_os_log> *_loggingConnection;
}


@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodesWithBlockedFeature; // ivar: _momentNodesWithBlockedFeature


-(id)initWithUserFeedbackCalculator:(id)arg0 ;
-(id)initWithUserFeedbackCalculator:(id)arg0 loggingConnection:(id)arg1 ;
-(id)momentNodesWithBlockedFeatureInGraph:(id)arg0 progressReporter:(id)arg1 ;
-(void)prefetchMomentNodesWithBlockedFeatureIfNeededInGraph:(id)arg0 progressReporter:(id)arg1 ;


@end


#endif