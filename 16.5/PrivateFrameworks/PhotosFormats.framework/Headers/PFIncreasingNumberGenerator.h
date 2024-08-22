// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFINCREASINGNUMBERGENERATOR_H
#define PFINCREASINGNUMBERGENERATOR_H

@protocol PFSeededRandomNumberGenerator;

#import <Foundation/Foundation.h>


@interface PFIncreasingNumberGenerator : NSObject <PFSeededRandomNumberGenerator>



@property (nonatomic) NSUInteger seed; // ivar: _seed


-(NSUInteger)nextUnsignedIntegerLessThan:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithSeed:(NSUInteger)arg0 ;


@end


#endif