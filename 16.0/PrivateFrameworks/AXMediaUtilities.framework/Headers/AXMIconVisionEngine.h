// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXMICONVISIONENGINE_H
#define AXMICONVISIONENGINE_H



#import "AXMVisionEngine.h"
#import "AXMBrailleEdgesDetectorNode.h"
#import "AXMIconClassDetectorNode.h"
#import "AXMImageNode.h"

@interface AXMIconVisionEngine : AXMVisionEngine

@property (weak, nonatomic) AXMBrailleEdgesDetectorNode *brailleEdgeDetector; // ivar: _brailleEdgeDetector
@property (weak, nonatomic) AXMIconClassDetectorNode *iconClassDetector; // ivar: _iconClassDetector
@property (weak, nonatomic) AXMImageNode *imageNode; // ivar: _imageNode


+(id)sharedInstance;
-(id)classifyImages:(id)arg0 withTimeout:(CGFloat)arg1 ;
-(id)initWithIdentifier:(id)arg0 ;


@end


#endif