// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIGCAPTURESINKPIPELINE_H
#define FIGCAPTURESINKPIPELINE_H

@class NSString;


#import "FigCapturePipeline.h"
#import "BWNodeOutput.h"

@interface FigCaptureSinkPipeline : FigCapturePipeline {
    BWNodeOutput *_upstreamOutput;
}


@property (nonatomic) BOOL discardsSampleData;
@property (readonly, nonatomic) NSString *sinkID; // ivar: _sinkID


-(id)initWithGraph:(id)arg0 name:(id)arg1 sinkID:(id)arg2 ;
-(void)dealloc;
-(void)setUpstreamOutput:(id)arg0 ;


@end


#endif