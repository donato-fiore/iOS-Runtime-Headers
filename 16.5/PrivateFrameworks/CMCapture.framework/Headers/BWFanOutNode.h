// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWFANOUTNODE_H
#define BWFANOUTNODE_H



#import "BWNode.h"

@interface BWFanOutNode : BWNode {
    *id _outputsCArray;
    *BOOL _outputsDiscardsAttachedMedia;
    int _outputsCount;
}




+(void)initialize;
-(BOOL)hasNonLiveConfigurationChanges;
-(id)initWithFanOutCount:(int)arg0 mediaType:(unsigned int)arg1 ;
-(id)nodeSubType;
-(id)nodeType;
-(void)configurationWithID:(NSInteger)arg0 updatedFormat:(id)arg1 didBecomeLiveForInput:(id)arg2 ;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 ;
-(void)handleDroppedSample:(id)arg0 forInput:(id)arg1 ;
-(void)handleNodeError:(id)arg0 forInput:(id)arg1 ;
-(void)makeCurrentConfigurationLive;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;
-(void)setDiscardsAttachedMedia:(BOOL)arg0 forOutputIndex:(int)arg1 ;


@end


#endif