// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTCELLULARQOSFLOW_H
#define CTCELLULARQOSFLOW_H

@class NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CTQoS.h"

@interface CTCellularQoSFlow : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) NSUInteger bearerId; // ivar: _bearerId
@property (nonatomic) NSUInteger flowId; // ivar: _flowId
@property (retain, nonatomic) NSNumber *is5G; // ivar: _is5G
@property (retain, nonatomic) NSNumber *queueSetId; // ivar: _queueSetId
@property (retain, nonatomic) CTQoS *rxQos; // ivar: _rxQos
@property (retain, nonatomic) CTQoS *txQos; // ivar: _txQos


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif