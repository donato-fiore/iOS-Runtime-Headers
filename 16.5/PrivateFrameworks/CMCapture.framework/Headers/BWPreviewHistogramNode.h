// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWPREVIEWHISTOGRAMNODE_H
#define BWPREVIEWHISTOGRAMNODE_H



#import "BWNode.h"

@interface BWPreviewHistogramNode : BWNode {
    BOOL _ispHistogramDownsamplingEnabled;
}


@property (nonatomic) BOOL ispHistogramsEnabled; // ivar: _ispHistogramsEnabled
@property (nonatomic) BOOL msrHistogramsEnabled; // ivar: _msrHistogramsEnabled


+(void)initialize;
-(id)init;
-(id)nodeSubType;
-(id)nodeType;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;


@end


#endif