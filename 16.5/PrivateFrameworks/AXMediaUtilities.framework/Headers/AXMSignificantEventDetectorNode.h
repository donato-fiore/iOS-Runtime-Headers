// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXMSIGNIFICANTEVENTDETECTORNODE_H
#define AXMSIGNIFICANTEVENTDETECTORNODE_H

@class VN6Mb1ME89lyW3HpahkEygIG;


#import "AXMEvaluationNode.h"

@interface AXMSignificantEventDetectorNode : AXMEvaluationNode {
    VN6Mb1ME89lyW3HpahkEygIG *_request;
}




+(BOOL)addSignificantEventResultToContext:(id)arg0 forIdentifier:(id)arg1 confidence:(CGFloat)arg2 markAsSensitiveCaptionContent:(BOOL)arg3 ;
+(BOOL)isSupported;
+(BOOL)supportsSecureCoding;
+(id)title;
-(BOOL)validateVisionKitSoftLinkSymbols;
-(void)evaluate:(id)arg0 metrics:(id)arg1 ;


@end


#endif