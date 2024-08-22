// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBIDLETIMERTIMEOUTRANGE_H
#define SBIDLETIMERTIMEOUTRANGE_H

@class NSString;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface SBIdleTimerTimeoutRange : NSObject <BSDescriptionProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat lowerTimeout; // ivar: _lowerTimeout
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat upperTimeout; // ivar: _upperTimeout


-(BOOL)intersects:(id)arg0 ;
-(id)clippedRangeWithFavoredRange:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithLowerTimeout:(CGFloat)arg0 upperTimeout:(CGFloat)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif