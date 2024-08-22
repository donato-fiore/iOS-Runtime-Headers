// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PTCINEMATOGRAPHYNETWORKFLOATOUTPUTSTREAM_H
#define PTCINEMATOGRAPHYNETWORKFLOATOUTPUTSTREAM_H


#import <Foundation/Foundation.h>


@interface PTCinematographyNetworkFloatOutputStream : NSObject

@property (readonly) NSUInteger count; // ivar: _count
@property (readonly) *float fp; // ivar: _fp
@property NSUInteger index; // ivar: _index


-(NSUInteger)remainingCount;
-(id)initWithDestination:(*float)arg0 count:(NSUInteger)arg1 ;
-(void)writeFloat:(float)arg0 ;
-(void)writeFloats:(*float)arg0 count:(NSUInteger)arg1 ;
-(void)writeOneHot:(NSUInteger)arg0 count:(NSUInteger)arg1 ;
-(void)writeZerosWithCount:(NSUInteger)arg0 ;


@end


#endif