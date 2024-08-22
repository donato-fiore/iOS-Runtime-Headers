// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CMALTITUDEDATAINTERNAL_H
#define CMALTITUDEDATAINTERNAL_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CMAltitudeDataInternal : NSObject <NSCopying>

 {
    float fAltitude;
    float fPressure;
}




-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAltitude:(float)arg0 andPressure:(float)arg1 ;
-(void)setAltitude:(float)arg0 andPressure:(float)arg1 ;


@end


#endif