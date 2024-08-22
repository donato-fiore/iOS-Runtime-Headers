// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTDEVVALUE_H
#define TSTDEVVALUE_H


#import <Foundation/Foundation.h>


@interface TSTDEVValue : NSObject

@property (readonly, nonatomic) CGFloat observationInterval; // ivar: _observationInterval
@property (readonly, nonatomic) CGFloat tdev; // ivar: _tdev


-(id)description;
-(id)initWithObservationInterval:(CGFloat)arg0 andTDEV:(CGFloat)arg1 ;


@end


#endif