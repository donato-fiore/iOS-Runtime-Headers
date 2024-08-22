// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDSBASISOBJECT_H
#define CDSBASISOBJECT_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface CDSBasisObject : NSObject

@property (nonatomic) NSUInteger attributeId; // ivar: _attributeId
@property (nonatomic) CGFloat basisDoubleValue; // ivar: _basisDoubleValue
@property (nonatomic) NSUInteger basisUint64Value; // ivar: _basisUint64Value
@property (retain, nonatomic) NSString *basisValueString; // ivar: _basisValueString
@property (retain, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) BOOL fallingEdge; // ivar: _fallingEdge
@property (nonatomic) NSUInteger localTime; // ivar: _localTime
@property (nonatomic) BOOL risingEdge; // ivar: _risingEdge
@property (nonatomic) NSInteger type; // ivar: _type


-(id)initWithLocalTime:(NSUInteger)arg0 creationDate:(id)arg1 basisValueString:(id)arg2 basisUint64Value:(NSUInteger)arg3 basisDoubleValue:(CGFloat)arg4 risingEdge:(BOOL)arg5 fallingEdge:(BOOL)arg6 duration:(CGFloat)arg7 attributeId:(NSUInteger)arg8 type:(NSInteger)arg9 ;


@end


#endif