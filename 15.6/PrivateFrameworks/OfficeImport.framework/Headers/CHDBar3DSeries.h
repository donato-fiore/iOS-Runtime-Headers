// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHDBAR3DSERIES_H
#define CHDBAR3DSERIES_H



#import "CHDSeries.h"

@interface CHDBar3DSeries : CHDSeries {
    int mShapeType;
}




-(id)init;
-(id)shallowCopy;
-(int)shapeType;
-(void)setShapeType:(int)arg0 ;


@end


#endif