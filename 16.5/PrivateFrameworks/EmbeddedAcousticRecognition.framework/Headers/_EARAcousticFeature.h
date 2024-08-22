// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EARACOUSTICFEATURE_H
#define _EARACOUSTICFEATURE_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _EARAcousticFeature : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSArray *acousticFeatureValuePerFrame; // ivar: _acousticFeatureValuePerFrame
@property (readonly, nonatomic) CGFloat frameDuration; // ivar: _frameDuration


-(id)_initWithAcousticFeatureValues:(id)arg0 frameDuration:(float)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif