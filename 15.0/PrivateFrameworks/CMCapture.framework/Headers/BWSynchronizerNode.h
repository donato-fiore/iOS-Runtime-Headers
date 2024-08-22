// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWSYNCHRONIZERNODE_H
#define BWSYNCHRONIZERNODE_H



#import "BWNode.h"

@interface BWSynchronizerNode : BWNode {
    *OpaqueCMClock _sourceClock;
    *OpaqueCMClock _masterClock;
    ? _ptsSyncHistory;
    int _oldestPTSSyncHistoryElement;
    int _newestPTSSyncHistoryElement;
}




+(void)initialize;
-(id)initWithMediaType:(unsigned int)arg0 ;
-(id)nodeSubType;
-(id)nodeType;
-(struct OpaqueCMClock *)masterClock;
-(struct OpaqueCMClock *)sourceClock;
-(void)dealloc;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 ;
-(void)handleDroppedSample:(id)arg0 forInput:(id)arg1 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;
-(void)setMasterClock:(struct OpaqueCMClock *)arg0 ;
-(void)setSourceClock:(struct OpaqueCMClock *)arg0 ;


@end


#endif