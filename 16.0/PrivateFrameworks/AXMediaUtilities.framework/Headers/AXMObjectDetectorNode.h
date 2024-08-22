// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXMOBJECTDETECTORNODE_H
#define AXMOBJECTDETECTORNODE_H

@class VNRecognizeObjectsRequest;


#import "AXMEvaluationNode.h"

@interface AXMObjectDetectorNode : AXMEvaluationNode {
    VNRecognizeObjectsRequest *_recognizeObjectsRequest;
}




+(BOOL)isSupported;
+(BOOL)supportsSecureCoding;
+(id)possibleObjectClassifications;
+(id)title;
-(BOOL)validateVisionKitSoftLinkSymbols;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)evaluate:(id)arg0 metrics:(id)arg1 ;


@end


#endif