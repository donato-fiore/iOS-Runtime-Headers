// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPARC4RANDOMSOURCE_H
#define MPARC4RANDOMSOURCE_H

@class NSData;
@protocol MPRandom, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface MPARC4RandomSource : NSObject <MPRandom, NSSecureCoding, NSCopying>

 {
    *Arc4State _state;
}


@property (copy, nonatomic) NSData *seed; // ivar: _seed


+(BOOL)supportsSecureCoding;
-(NSUInteger)nextIntWithUpperBound:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSeed:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif