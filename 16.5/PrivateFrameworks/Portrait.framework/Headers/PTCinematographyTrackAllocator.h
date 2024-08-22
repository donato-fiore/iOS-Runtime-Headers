// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PTCINEMATOGRAPHYTRACKALLOCATOR_H
#define PTCINEMATOGRAPHYTRACKALLOCATOR_H


#import <Foundation/Foundation.h>


@interface PTCinematographyTrackAllocator : NSObject

@property (nonatomic) NSInteger trackIdentifier; // ivar: _trackIdentifier


-(NSInteger)nextTrackIdentifier;
-(id)_asCinematographyDictionary;
-(id)_initWithCinematographyDictionary:(id)arg0 ;
-(id)initWithTrackIdentifier:(NSInteger)arg0 ;


@end


#endif