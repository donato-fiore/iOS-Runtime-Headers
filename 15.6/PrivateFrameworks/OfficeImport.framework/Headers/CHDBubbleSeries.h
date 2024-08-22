// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHDBUBBLESERIES_H
#define CHDBUBBLESERIES_H



#import "CHDSeries.h"
#import "CHDData.h"

@interface CHDBubbleSeries : CHDSeries {
    CHDData *mSizeData;
    BOOL mBubble3D;
    BOOL mInvertIfNegative;
    BOOL mShowBubbleSize;
}




-(BOOL)isBubble3D;
-(BOOL)isInvertIfNegative;
-(BOOL)isShowBubbleSize;
-(id)sizeData;
-(void)setBubble3D:(BOOL)arg0 ;
-(void)setCategoryData:(id)arg0 ;
-(void)setInvertIfNegative:(BOOL)arg0 ;
-(void)setShowBubbleSize:(BOOL)arg0 ;
-(void)setSizeData:(id)arg0 ;


@end


#endif