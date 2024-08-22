// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CCUIC2ANIMATIONPARAMETERS_H
#define CCUIC2ANIMATIONPARAMETERS_H

@class NSString;
@protocol CCUIAnimationParameters, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface CCUIC2AnimationParameters : NSObject <CCUIAnimationParameters, NSMutableCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CAFrameRateRange frameRateRange; // ivar: _frameRateRange
@property (readonly, nonatomic) CGFloat friction; // ivar: _friction
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) unsigned int highFrameRateReason; // ivar: _highFrameRateReason
@property (readonly, nonatomic, getter=isInteractive) BOOL interactive; // ivar: _interactive
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat tension; // ivar: _tension


-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithAnimationParameters:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif