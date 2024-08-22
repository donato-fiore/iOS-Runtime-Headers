// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXMMODELDETECTORNODE_H
#define AXMMODELDETECTORNODE_H

@class VNCoreMLModel, NSString, NSURL;


#import "AXMEvaluationNode.h"

@interface AXMModelDetectorNode : AXMEvaluationNode {
    VNCoreMLModel *_model;
}


@property (readonly, nonatomic) NSString *modelIdentifier;
@property (retain, nonatomic) NSURL *modelURL; // ivar: _modelURL


+(BOOL)isSupported;
+(BOOL)supportsSecureCoding;
+(id)title;
-(BOOL)_loadModel:(*id)arg0 ;
-(BOOL)preloadModelIfNeeded:(*id)arg0 ;
-(BOOL)requiresVisionFramework;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)evaluate:(id)arg0 metrics:(id)arg1 ;
-(void)nodeInitialize;


@end


#endif