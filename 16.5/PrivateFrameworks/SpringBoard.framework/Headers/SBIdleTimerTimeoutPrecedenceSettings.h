// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBIDLETIMERTIMEOUTPRECEDENCESETTINGS_H
#define SBIDLETIMERTIMEOUTPRECEDENCESETTINGS_H

@class NSString;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface SBIdleTimerTimeoutPrecedenceSettings : NSObject <BSDescriptionProviding>



@property (readonly, nonatomic) CGFloat criticalTimeout; // ivar: _criticalTimeout
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat greatestTimeout;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat highTimeout; // ivar: _highTimeout
@property (readonly, nonatomic) NSUInteger highestPrecedence;
@property (readonly, nonatomic) CGFloat leastTimeout;
@property (readonly, nonatomic) CGFloat normalTimeout; // ivar: _normalTimeout
@property (readonly) Class superclass;


-(CGFloat)_intervalForPrecedence:(NSUInteger)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_setTimeout:(CGFloat)arg0 ifGreatestForPrecedence:(NSUInteger)arg1 ;
-(void)_setTimeout:(CGFloat)arg0 ifLeastForPrecedence:(NSUInteger)arg1 ;
-(void)_setTimeout:(CGFloat)arg0 withPrecedence:(NSUInteger)arg1 ;


@end


#endif