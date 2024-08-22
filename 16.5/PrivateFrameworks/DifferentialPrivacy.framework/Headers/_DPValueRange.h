// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DPVALUERANGE_H
#define _DPVALUERANGE_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface _DPValueRange : NSObject

@property (readonly, nonatomic) NSNumber *maxPossible; // ivar: _maxPossible
@property (readonly, nonatomic) NSNumber *minPossible; // ivar: _minPossible
@property (readonly, nonatomic) NSNumber *range; // ivar: _range


+(id)rangeWithMin:(id)arg0 max:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToValueRange:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithMin:(id)arg0 max:(id)arg1 ;


@end


#endif