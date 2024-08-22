// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PASSTRINGPAIRS_H
#define _PASSTRINGPAIRS_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface _PASStringPairs : NSObject

@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) NSArray *keys; // ivar: _keys
@property (readonly, nonatomic) NSArray *values; // ivar: _values


-(id)init;
-(id)initWithKeys:(id)arg0 values:(id)arg1 ;
-(id)keyAtIndex:(NSUInteger)arg0 ;
-(id)valueAtIndex:(NSUInteger)arg0 ;


@end


#endif