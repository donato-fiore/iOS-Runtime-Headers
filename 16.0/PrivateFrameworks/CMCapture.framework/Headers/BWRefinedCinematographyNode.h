// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWREFINEDCINEMATOGRAPHYNODE_H
#define BWREFINEDCINEMATOGRAPHYNODE_H

@class PTCinematographyRefinement;


#import "BWNode.h"

@interface BWRefinedCinematographyNode : BWNode {
    PTCinematographyRefinement *_refinementSession;
    BOOL _isRefinementSessionActive;
}




+(void)initialize;
-(id)init;
-(id)nodeSubType;
-(id)nodeType;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 ;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;


@end


#endif