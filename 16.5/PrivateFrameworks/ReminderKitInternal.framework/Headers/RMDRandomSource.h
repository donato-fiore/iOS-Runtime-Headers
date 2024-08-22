// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RMDRANDOMSOURCE_H
#define RMDRANDOMSOURCE_H

@protocol RMDRandom, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface RMDRandomSource : NSObject <RMDRandom, NSSecureCoding, NSCopying>





+(BOOL)supportsSecureCoding;
+(id)sharedRandom;
+(id)systemRandom;
-(BOOL)nextBool;
-(NSInteger)nextInt;
-(NSUInteger)nextIntWithUpperBound:(NSUInteger)arg0 ;
-(float)nextUniform;
-(id)arrayByShufflingObjectsInArray:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif