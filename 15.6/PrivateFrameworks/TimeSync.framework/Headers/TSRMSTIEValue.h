// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSRMSTIEVALUE_H
#define TSRMSTIEVALUE_H


#import <Foundation/Foundation.h>


@interface TSRMSTIEValue : NSObject

@property (readonly, nonatomic) CGFloat observationInterval; // ivar: _observationInterval
@property (readonly, nonatomic) CGFloat rmstie; // ivar: _rmstie


-(id)description;
-(id)initWithObservationInterval:(CGFloat)arg0 andRMSTIE:(CGFloat)arg1 ;


@end


#endif