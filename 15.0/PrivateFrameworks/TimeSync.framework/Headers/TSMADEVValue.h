// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSMADEVVALUE_H
#define TSMADEVVALUE_H


#import <Foundation/Foundation.h>


@interface TSMADEVValue : NSObject

@property (readonly, nonatomic) CGFloat madev; // ivar: _madev
@property (readonly, nonatomic) CGFloat observationInterval; // ivar: _observationInterval


-(id)description;
-(id)initWithObservationInterval:(CGFloat)arg0 andMADEV:(CGFloat)arg1 ;


@end


#endif