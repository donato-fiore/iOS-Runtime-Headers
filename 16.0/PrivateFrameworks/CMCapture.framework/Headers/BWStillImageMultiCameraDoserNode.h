// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWSTILLIMAGEMULTICAMERADOSERNODE_H
#define BWSTILLIMAGEMULTICAMERADOSERNODE_H

@class NSArray, NSMutableArray;


#import "BWNode.h"

@interface BWStillImageMultiCameraDoserNode : BWNode {
    NSArray *_portTypes;
    NSInteger _currentSettingsID;
    NSMutableArray *_inputIndicesForWhichDosingIsPerformed;
    NSMutableArray *_stashedObjectsByInputIndex;
}




+(void)initialize;
-(NSUInteger)outputIndexForPortType:(id)arg0 ;
-(id)initWithPortTypes:(id)arg0 ;
-(id)nodeSubType;
-(id)nodeType;
-(void)configurationWithID:(NSInteger)arg0 updatedFormat:(id)arg1 didBecomeLiveForInput:(id)arg2 ;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 ;
-(void)handleNodeError:(id)arg0 forInput:(id)arg1 ;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;


@end


#endif