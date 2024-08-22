// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKLINEARCONGRUENTIALRANDOMSOURCE_H
#define GKLINEARCONGRUENTIALRANDOMSOURCE_H



#import "GKRandomSource.h"

@interface GKLinearCongruentialRandomSource : GKRandomSource {
    NSUInteger _seed;
}


@property (nonatomic) NSUInteger seed;


+(BOOL)supportsSecureCoding;
-(BOOL)nextBool;
-(NSInteger)nextInt;
-(NSUInteger)nextBits:(int)arg0 ;
-(NSUInteger)nextIntWithUpperBound:(NSUInteger)arg0 ;
-(float)nextUniform;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSeed:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif