// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXMHORIZONDETECTORNODE_H
#define AXMHORIZONDETECTORNODE_H

@class VNDetectHorizonRequest;


#import "AXMEvaluationNode.h"

@interface AXMHorizonDetectorNode : AXMEvaluationNode

@property (retain, nonatomic, setter=_setDetectHorizonRequest:) VNDetectHorizonRequest *_detectHorizonRequest; // ivar: __detectHorizonRequest


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