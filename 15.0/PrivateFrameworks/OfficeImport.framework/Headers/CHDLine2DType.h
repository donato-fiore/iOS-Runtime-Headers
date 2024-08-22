// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHDLINE2DTYPE_H
#define CHDLINE2DTYPE_H



#import "CHDLineType.h"

@interface CHDLine2DType : CHDLineType {
    BOOL mShowMarker;
    BOOL mStockType;
}




-(BOOL)isStockType;
-(BOOL)showMarker;
-(id)initWithChart:(id)arg0 ;
-(void)setShowMarker:(BOOL)arg0 ;
-(void)setStockType:(BOOL)arg0 ;


@end


#endif