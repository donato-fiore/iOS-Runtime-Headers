// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXMBRAILLEEDGESDETECTORNODE_H
#define AXMBRAILLEEDGESDETECTORNODE_H



#import "AXMEvaluationNode.h"

@interface AXMBrailleEdgesDetectorNode : AXMEvaluationNode



+(BOOL)isSupported;
+(BOOL)supportsSecureCoding;
+(id)title;
-(id)_generateResultFromImage:(id)arg0 canvasDescription:(id)arg1 invert:(BOOL)arg2 ;
-(id)_processImage:(id)arg0 analaysisOptions:(id)arg1 ;
-(unsigned char)_mapLuminance:(CGFloat)arg0 toDiscreteNumber:(NSUInteger)arg1 invert:(BOOL)arg2 ;
-(void)evaluate:(id)arg0 metrics:(id)arg1 ;


@end


#endif