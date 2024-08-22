// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIVIEWSPRINGANIMATIONDESCRIPTION_H
#define UIVIEWSPRINGANIMATIONDESCRIPTION_H


#import <Foundation/Foundation.h>


@interface UIViewSpringAnimationDescription : NSObject

@property (nonatomic) CGFloat friction; // ivar: _friction
@property (nonatomic) ? parameters; // ivar: _parameters
@property (nonatomic) CGFloat tension; // ivar: _tension
@property (nonatomic) BOOL usesDampingRatioAndResponse; // ivar: _usesDampingRatioAndResponse


+(id)descriptionWithSpringAnimationParameters:(struct ? )arg0 ;
+(id)descriptionWithTension:(CGFloat)arg0 friction:(CGFloat)arg1 ;


@end


#endif