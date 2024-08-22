// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DESFEDSTATSRECORDER_H
#define DESFEDSTATSRECORDER_H

@protocol DESFedStatsRecorderProtocol;

#import <Foundation/Foundation.h>


@interface DESFedStatsRecorder : NSObject <DESFedStatsRecorderProtocol>





+(void)initialize;
-(BOOL)record:(id)arg0 data:(id)arg1 encodingSchema:(id)arg2 metadata:(id)arg3 errorOut:(*id)arg4 ;


@end


#endif