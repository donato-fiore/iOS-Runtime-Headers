// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBIDLETIMERDESCRIPTOR_H
#define SBIDLETIMERDESCRIPTOR_H

@class NSString;
@protocol BSDescriptionProviding, NSCopying;

#import <Foundation/Foundation.h>


@interface SBIdleTimerDescriptor : NSObject <BSDescriptionProviding, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat quickUnwarnInterval; // ivar: _quickUnwarnInterval
@property (nonatomic) CGFloat sampleInterval; // ivar: _sampleInterval
@property (readonly, nonatomic) BOOL shouldExpireAfterWarn;
@property (readonly, nonatomic) BOOL shouldWarn;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger timerMode; // ivar: _timerMode
@property (nonatomic) CGFloat totalInterval; // ivar: _totalInterval
@property (nonatomic) CGFloat warnInterval; // ivar: _warnInterval


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithTimerMode:(NSInteger)arg0 warnInterval:(CGFloat)arg1 totalInterval:(CGFloat)arg2 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif