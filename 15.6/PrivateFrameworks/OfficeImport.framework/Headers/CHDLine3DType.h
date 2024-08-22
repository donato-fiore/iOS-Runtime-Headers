// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHDLINE3DTYPE_H
#define CHDLINE3DTYPE_H



#import "CHDLineType.h"

@interface CHDLine3DType : CHDLineType {
    int mGapDepth;
}




+(BOOL)is3DType;
-(id)initWithChart:(id)arg0 ;
-(int)gapDepth;
-(void)setGapDepth:(int)arg0 ;


@end


#endif