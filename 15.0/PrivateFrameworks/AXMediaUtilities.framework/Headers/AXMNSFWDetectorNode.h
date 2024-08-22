// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXMNSFWDETECTORNODE_H
#define AXMNSFWDETECTORNODE_H

@class VNVYvzEtX1JlUdu8xx5qhDI;


#import "AXMEvaluationNode.h"

@interface AXMNSFWDetectorNode : AXMEvaluationNode {
    VNVYvzEtX1JlUdu8xx5qhDI *_request;
}




+(BOOL)addNSFWResultToContext:(id)arg0 forIdentifier:(id)arg1 confidence:(CGFloat)arg2 markAsSensitiveCaptionContent:(BOOL)arg3 ;
+(BOOL)isSupported;
+(BOOL)supportsSecureCoding;
+(id)title;
-(BOOL)validateVisionKitSoftLinkSymbols;
-(void)evaluate:(id)arg0 metrics:(id)arg1 ;


@end


#endif