// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DTKTRACETAPLOCALVFSTRACEPATHSPRODUCER_H
#define DTKTRACETAPLOCALVFSTRACEPATHSPRODUCER_H

@protocol DTKTraceTapLocalEventProducer;

#import <Foundation/Foundation.h>


@interface DTKTraceTapLocalVFSTracePathsProducer : NSObject <DTKTraceTapLocalEventProducer>





+(BOOL)supportsConfig:(id)arg0 ;
-(id)init;
-(void)_emitVFSDump;
-(void)pause;
-(void)start;
-(void)stop;
-(void)unpause;


@end


#endif