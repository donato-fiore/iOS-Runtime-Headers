// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ECCOLUMNWIDTHCONVERTOR_H
#define ECCOLUMNWIDTHCONVERTOR_H


#import <Foundation/Foundation.h>


@interface ECColumnWidthConvertor : NSObject {
    int mMultiplier;
}




-(CGFloat)lassoColumnWidthFromXl:(CGFloat)arg0 ;
-(CGFloat)xlColumnWidthFromLasso:(CGFloat)arg0 ;
-(CGFloat)xlColumnWidthFromXlBaseColumnWidth:(CGFloat)arg0 ;
-(float)fontWidthAdjustmentFor:(id)arg0 ;
-(struct CGSize )stringSizeWithFont:(id)arg0 edFont:(id)arg1 drawingState:(id)arg2 ;
-(void)setupWithEDFont:(id)arg0 state:(id)arg1 ;


@end


#endif