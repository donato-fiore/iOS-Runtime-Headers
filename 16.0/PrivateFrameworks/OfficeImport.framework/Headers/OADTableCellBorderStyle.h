// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OADTABLECELLBORDERSTYLE_H
#define OADTABLECELLBORDERSTYLE_H


#import <Foundation/Foundation.h>

#import "OADStroke.h"

@interface OADTableCellBorderStyle : NSObject {
    OADStroke *mLeftStroke;
    OADStroke *mRightStroke;
    OADStroke *mTopStroke;
    OADStroke *mBottomStroke;
    OADStroke *mHorzInsideStroke;
    OADStroke *mVertInsideStroke;
    OADStroke *mTopLeftToBottomRightStroke;
    OADStroke *mBottomLeftToTopRightStroke;
}




+(id)defaultAxisParallelStroke;
+(id)defaultObliqueStroke;
+(id)defaultStyle;
-(id)bottomLeftToTopRightStroke;
-(id)bottomStroke;
-(id)description;
-(id)horzInsideStroke;
-(id)leftStroke;
-(id)rightStroke;
-(id)shallowCopy;
-(id)stroke:(int)arg0 ;
-(id)topLeftToBottomRightStroke;
-(id)topStroke;
-(id)vertInsideStroke;
-(void)applyOverridesFrom:(id)arg0 ;
-(void)setBottomLeftToTopRightStroke:(id)arg0 ;
-(void)setBottomStroke:(id)arg0 ;
-(void)setHorzInsideStroke:(id)arg0 ;
-(void)setLeftStroke:(id)arg0 ;
-(void)setRightStroke:(id)arg0 ;
-(void)setStrokeOfType:(int)arg0 toValue:(id)arg1 ;
-(void)setTopLeftToBottomRightStroke:(id)arg0 ;
-(void)setTopStroke:(id)arg0 ;
-(void)setVertInsideStroke:(id)arg0 ;


@end


#endif