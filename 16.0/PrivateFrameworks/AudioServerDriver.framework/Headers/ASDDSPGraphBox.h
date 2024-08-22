// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASDDSPGRAPHBOX_H
#define ASDDSPGRAPHBOX_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ASDDSPGraphBox : NSObject {
    shared_ptr<DSPGraph::Graph> _graph;
}


@property (readonly, nonatomic) *void box; // ivar: _box
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSInteger numInputs;
@property (readonly, nonatomic) NSInteger numOutputs;


-(BOOL)getParameter:(*float)arg0 forID:(unsigned int)arg1 scope:(unsigned int)arg2 element:(unsigned int)arg3 ;
-(BOOL)getParameterInfo:(struct AudioUnitParameterInfo *)arg0 forID:(unsigned int)arg1 inScope:(unsigned int)arg2 ;
-(BOOL)getParameterList:(*unsigned int)arg0 numParameterIDs:(*NSInteger)arg1 inScope:(unsigned int)arg2 ;
-(BOOL)hasParameter:(unsigned int)arg0 scope:(unsigned int)arg1 element:(unsigned int)arg2 ;
-(BOOL)setParameter:(float)arg0 forID:(unsigned int)arg1 scope:(unsigned int)arg2 element:(unsigned int)arg3 bufferOffset:(NSInteger)arg4 ;
-(BOOL)startInjectingPort:(NSInteger)arg0 toFile:(id)arg1 shouldLoop:(BOOL)arg2 ;
-(BOOL)startRecordingPort:(NSInteger)arg0 toFile:(id)arg1 ;
-(BOOL)startRecordingPort:(NSInteger)arg0 toFile:(id)arg1 withAudioCapturerOptions:(NSUInteger)arg2 ;
-(BOOL)stopInjectingPort:(NSInteger)arg0 ;
-(BOOL)stopRecordingPort:(NSInteger)arg0 ;
-(id)init;
-(id)initWithBox:(*void)arg0 fromGraph:(struct shared_ptr<DSPGraph::Graph> )arg1 ;


@end


#endif