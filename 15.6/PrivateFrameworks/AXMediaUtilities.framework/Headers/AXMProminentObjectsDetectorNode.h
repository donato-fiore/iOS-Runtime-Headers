// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXMPROMINENTOBJECTSDETECTORNODE_H
#define AXMPROMINENTOBJECTSDETECTORNODE_H

@class VNGenerateAttentionBasedSaliencyImageRequest;


#import "AXMEvaluationNode.h"

@interface AXMProminentObjectsDetectorNode : AXMEvaluationNode

@property (retain, nonatomic) VNGenerateAttentionBasedSaliencyImageRequest *_imageSaliencyRequest; // ivar: __imageSaliencyRequest


+(BOOL)isSupported;
+(BOOL)supportsSecureCoding;
+(id)title;
-(BOOL)requiresVisionFramework;
-(BOOL)validateVisionKitSoftLinkSymbols;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)evaluate:(id)arg0 metrics:(id)arg1 ;
-(void)nodeInitialize;


@end


#endif