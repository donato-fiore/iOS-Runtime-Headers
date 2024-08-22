// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SNDSPGRAPH_H
#define SNDSPGRAPH_H

@class NSSet, NSString;

#import <Foundation/Foundation.h>


@interface SNDSPGraph : NSObject

@property (readonly, nonatomic) NSSet *boxes;
@property (readonly, nonatomic) BOOL configured;
@property (readonly, nonatomic) shared_ptr<DSPGraph::Graph> graph; // ivar: _graph
@property (readonly, nonatomic) BOOL initialized;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSInteger numberOfInputs;
@property (readonly, nonatomic) NSInteger numberOfOutputs;
@property (readonly, nonatomic) NSInteger sliceDurationInSamples;


-(BOOL)configure;
-(BOOL)getParameter:(*float)arg0 forID:(unsigned int)arg1 ;
-(BOOL)getProperty:(*void)arg0 withSize:(*unsigned int)arg1 forID:(unsigned int)arg2 ;
-(BOOL)getPropertySize:(*unsigned int)arg0 isWritable:(*BOOL)arg1 forID:(unsigned int)arg2 ;
-(BOOL)hasParameter:(unsigned int)arg0 ;
-(BOOL)initialize;
-(BOOL)reset;
-(BOOL)setAUStrip:(id)arg0 ;
-(BOOL)setParameter:(float)arg0 forID:(unsigned int)arg1 ;
-(BOOL)setProperty:(*void)arg0 withSize:(unsigned int)arg1 forID:(unsigned int)arg2 ;
-(BOOL)setPropertyStrip:(id)arg0 withResourcePath:(id)arg1 ;
-(BOOL)setVariableSliceDuration:(NSInteger)arg0 forSampleRate:(NSInteger)arg1 ;
-(BOOL)unconfigure;
-(BOOL)uninitialize;
-(id)boxWithName:(id)arg0 ;
-(id)init;
-(id)initWithDSPGraph:(struct shared_ptr<DSPGraph::Graph> )arg0 ;
-(void)writeDotFileToPath:(id)arg0 ;


@end


#endif