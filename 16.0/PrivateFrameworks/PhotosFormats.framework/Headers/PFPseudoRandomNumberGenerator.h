// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFPSEUDORANDOMNUMBERGENERATOR_H
#define PFPSEUDORANDOMNUMBERGENERATOR_H

@protocol PFSeededRandomNumberGenerator;

#import <Foundation/Foundation.h>


@interface PFPseudoRandomNumberGenerator : NSObject <PFSeededRandomNumberGenerator>

 {
    unsigned int _z;
    unsigned int _w;
}


@property (nonatomic) NSUInteger seed;


-(CGFloat)_next;
-(NSUInteger)nextUnsignedIntegerLessThan:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithSeed:(NSUInteger)arg0 ;


@end


#endif