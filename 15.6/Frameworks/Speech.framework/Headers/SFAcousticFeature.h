// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFACOUSTICFEATURE_H
#define SFACOUSTICFEATURE_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SFAcousticFeature : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *acousticFeatureValuePerFrame; // ivar: _acousticFeatureValuePerFrame
@property (readonly, nonatomic) CGFloat frameDuration; // ivar: _frameDuration


+(BOOL)supportsSecureCoding;
-(id)_initWithAcousticFeatureValue:(id)arg0 frameDuration:(CGFloat)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif