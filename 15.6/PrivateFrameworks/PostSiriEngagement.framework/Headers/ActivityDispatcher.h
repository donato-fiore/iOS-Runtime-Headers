// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ACTIVITYDISPATCHER_H
#define ACTIVITYDISPATCHER_H


#import <Foundation/Foundation.h>


@interface ActivityDispatcher : NSObject



+(id)getErrorFailedCollectors:(id)arg0 ;
+(id)getErrorNoCollectorDefinitionsToRun;
+(id)getExecQ;
-(void)runCollectorsDefinedInParameters:(id)arg0 completion:(id)arg1 ;


@end


#endif