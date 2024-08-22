// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWSEMANTICSTYLESETFENCEDANIMATIONINFO_H
#define BWSEMANTICSTYLESETFENCEDANIMATIONINFO_H



#import "BWFencedAnimationInfo.h"
#import "FigCaptureSemanticStyleSet.h"

@interface BWSemanticStyleSetFencedAnimationInfo : BWFencedAnimationInfo

@property (readonly) FigCaptureSemanticStyleSet *semanticStyleSet; // ivar: _semanticStyleSet


+(id)fencedAnimationInfoWithSemanticStyleSet:(id)arg0 fencePortSendRight:(id)arg1 ;
-(id)description;
-(id)initWithSemanticStyleSet:(id)arg0 fencePortSendRight:(id)arg1 ;
-(void)dealloc;


@end


#endif