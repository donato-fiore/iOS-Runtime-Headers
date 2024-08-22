// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXMSCENEDETECTORNODE_H
#define AXMSCENEDETECTORNODE_H

@class VNSceneClassificationRequest;


#import "AXMEvaluationNode.h"

@interface AXMSceneDetectorNode : AXMEvaluationNode

@property (retain, nonatomic, setter=_setSceneClassificationRequest:) VNSceneClassificationRequest *_sceneClassificationRequest; // ivar: __sceneClassificationRequest
@property (nonatomic) unsigned int taxonomyOptions; // ivar: _taxonomyOptions


+(BOOL)isSupported;
+(BOOL)supportsSecureCoding;
+(id)possibleSceneClassifications;
+(id)title;
-(BOOL)_shouldIncludeSceneLabelForOCRDocumenTypeDetection:(id)arg0 ;
-(BOOL)validateVisionKitSoftLinkSymbols;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)evaluate:(id)arg0 metrics:(id)arg1 ;


@end


#endif