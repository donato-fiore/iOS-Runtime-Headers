// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ITIDLETIMEOUT_H
#define ITIDLETIMEOUT_H

@class NSString;
@protocol NSCopying, BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface ITIdleTimeout : NSObject <NSCopying, BSDescriptionProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger identifier; // ivar: _identifier
@property (readonly) Class superclass;


+(id)timeoutGeneratorUsingIdentifier:(SEL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithDuration:(CGFloat)arg0 ;
-(id)initWithDuration:(CGFloat)arg0 identifier:(NSUInteger)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif