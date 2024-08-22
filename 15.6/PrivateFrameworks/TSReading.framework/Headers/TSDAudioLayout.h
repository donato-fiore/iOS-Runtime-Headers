// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDAUDIOLAYOUT_H
#define TSDAUDIOLAYOUT_H



#import "TSDMediaLayout.h"

@interface TSDAudioLayout : TSDMediaLayout



-(BOOL)allowsConnections;
-(BOOL)canAspectRatioLockBeChangedByUser;
-(BOOL)canFlip;
-(BOOL)resizeMayChangeAspectRatio;
-(BOOL)shouldDisplayGuides;
-(BOOL)supportsRotation;
-(id)initWithInfo:(id)arg0 ;
-(id)layoutGeometryFromInfo;
-(id)movieInfo;
-(int)wrapType;
-(struct CGRect )alignmentFrame;
-(struct CGRect )computeAlignmentFrameInRoot:(BOOL)arg0 ;


@end


#endif