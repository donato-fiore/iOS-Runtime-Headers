// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKVECTORTIMESTAMPELEMENT_H
#define PKVECTORTIMESTAMPELEMENT_H


#import <Foundation/Foundation.h>


@interface PKVectorTimestampElement : NSObject

@property (nonatomic) NSUInteger clock; // ivar: _clock
@property (nonatomic) NSUInteger subclock; // ivar: _subclock


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;


@end


#endif