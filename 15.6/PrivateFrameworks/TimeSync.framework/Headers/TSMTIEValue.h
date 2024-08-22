// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSMTIEVALUE_H
#define TSMTIEVALUE_H


#import <Foundation/Foundation.h>


@interface TSMTIEValue : NSObject

@property (readonly, nonatomic) CGFloat mtie; // ivar: _mtie
@property (readonly, nonatomic) CGFloat observationInterval; // ivar: _observationInterval


-(id)description;
-(id)initWithObservationInterval:(CGFloat)arg0 andMTIE:(CGFloat)arg1 ;


@end


#endif