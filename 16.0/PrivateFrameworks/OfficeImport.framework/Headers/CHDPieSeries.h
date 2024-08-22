// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHDPIESERIES_H
#define CHDPIESERIES_H



#import "CHDSeries.h"

@interface CHDPieSeries : CHDSeries {
    int mExplosion;
}




-(id)init;
-(id)shallowCopy;
-(int)explosion;
-(void)setExplosion:(int)arg0 ;


@end


#endif