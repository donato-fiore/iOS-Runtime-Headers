// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHDBUBBLETYPE_H
#define CHDBUBBLETYPE_H



#import "CHDChartType.h"

@interface CHDBubbleType : CHDChartType {
    BOOL mShowNegativeBubbles;
    BOOL mSizeRepresentsRadius;
    int mBubbleScale;
}




-(BOOL)is3DType;
-(BOOL)isShowNegBubbles;
-(BOOL)isSizeRepresentingRadius;
-(id)initWithChart:(id)arg0 ;
-(int)bubbleScale;
-(int)defaultLabelPosition;
-(void)setBubbleScale:(int)arg0 ;
-(void)setShowNegBubbles:(BOOL)arg0 ;
-(void)setSizeRepresentsRadius:(BOOL)arg0 ;


@end


#endif