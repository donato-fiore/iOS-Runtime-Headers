// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFSPEECHACOUSTICFEATURE_H
#define AFSPEECHACOUSTICFEATURE_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AFSpeechAcousticFeature : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSArray *acousticFeatureValuePerFrame; // ivar: _acousticFeatureValuePerFrame
@property (readonly, nonatomic) CGFloat frameDuration; // ivar: _frameDuration


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAcousticFeatureValue:(id)arg0 frameDuration:(CGFloat)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif