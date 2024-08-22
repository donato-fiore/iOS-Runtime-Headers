// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSFEEDERPREFETCHOPTIONS_H
#define CLSFEEDERPREFETCHOPTIONS_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CLSFeederPrefetchOptions : NSObject <NSCopying>



@property (nonatomic) NSUInteger faceInformationPrefetchMode; // ivar: _faceInformationPrefetchMode
@property (nonatomic) NSUInteger locationPrefetchMode; // ivar: _locationPrefetchMode
@property (nonatomic) NSUInteger personCountPrefetchMode; // ivar: _personCountPrefetchMode
@property (nonatomic) NSUInteger personsPrefetchMode; // ivar: _personsPrefetchMode
@property (nonatomic) NSUInteger scenesPrefetchMode; // ivar: _scenesPrefetchMode


+(id)feederPrefetchOptionsWithDefaultMode:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)mergeWithFeederPrefetchOptions:(id)arg0 ;


@end


#endif