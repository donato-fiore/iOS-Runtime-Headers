// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DTKPKTRACEFILEAGGREGATOR_H
#define DTKPKTRACEFILEAGGREGATOR_H

@class NSString;
@protocol DTKPKtraceAggregator, DTKPConfiguration;

#import <Foundation/Foundation.h>

#import "DVTFileStream.h"
#import "DTKTraceSessionCreator.h"

@interface DTKPKTraceFileAggregator : NSObject <DTKPKtraceAggregator>

 {
    id<DTKPConfiguration> *_config;
    BOOL _kperfSample;
    DVTFileStream *_fileStream;
    int _ktraceFD;
    DTKTraceSessionCreator *_ktraceSession;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithConfig:(id)arg0 ;
-(id)pause;
-(id)resume;
-(id)start;
-(id)stop;
-(id)swapOutCurrentDatastream:(*id)arg0 ;
-(int)startKtraceSession:(char *)arg0 useExisting:(BOOL)arg1 outputFD:(*int)arg2 ;
-(int)stopKtraceSession;


@end


#endif