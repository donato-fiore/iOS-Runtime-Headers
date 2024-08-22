// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PDANIMATIONOLECHARTTARGET_H
#define PDANIMATIONOLECHARTTARGET_H



#import "PDAnimationShapeTarget.h"

@interface PDAnimationOleChartTarget : PDAnimationShapeTarget {
    int mLevel;
    int mChartSubElementType;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(int)chartSubElementType;
-(int)level;
-(void)setChartSubElementType:(int)arg0 ;
-(void)setLevel:(int)arg0 ;


@end


#endif