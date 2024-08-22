// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXMAXELEMENTVISIONENGINE_H
#define AXMAXELEMENTVISIONENGINE_H



#import "AXMVisionEngine.h"
#import "AXMAXElementDetectorNode.h"
#import "AXMScreenCaptureNode.h"
#import "AXMIconClassDetectorNode.h"
#import "AXMImageNode.h"
#import "AXMTextDetectorNode.h"

@interface AXMAXElementVisionEngine : AXMVisionEngine

@property (weak, nonatomic) AXMAXElementDetectorNode *axElementDetector; // ivar: _axElementDetector
@property (weak, nonatomic) AXMScreenCaptureNode *captureNode; // ivar: _captureNode
@property (weak, nonatomic) AXMIconClassDetectorNode *iconClassDetector; // ivar: _iconClassDetector
@property (weak, nonatomic) AXMImageNode *imageNode; // ivar: _imageNode
@property (weak, nonatomic) AXMTextDetectorNode *textDetector; // ivar: _textDetector


-(id)initWithIdentifier:(id)arg0 ;


@end


#endif