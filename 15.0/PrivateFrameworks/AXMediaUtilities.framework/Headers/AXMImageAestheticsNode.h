// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXMIMAGEAESTHETICSNODE_H
#define AXMIMAGEAESTHETICSNODE_H

@class VNClassifyImageAestheticsRequest;


#import "AXMEvaluationNode.h"

@interface AXMImageAestheticsNode : AXMEvaluationNode

@property (retain, nonatomic) VNClassifyImageAestheticsRequest *_imageAestheticsRequest; // ivar: __imageAestheticsRequest


+(BOOL)isSupported;
+(BOOL)supportsSecureCoding;
+(id)title;
-(BOOL)validateVisionKitSoftLinkSymbols;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)evaluate:(id)arg0 metrics:(id)arg1 ;


@end


#endif