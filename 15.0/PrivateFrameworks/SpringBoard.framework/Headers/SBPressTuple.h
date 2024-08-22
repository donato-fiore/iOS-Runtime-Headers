// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBPRESSTUPLE_H
#define SBPRESSTUPLE_H

@class NSString;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface SBPressTuple : NSObject <BSDescriptionProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat durationDown; // ivar: _durationDown
@property (nonatomic) CGFloat durationUp; // ivar: _durationUp
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithDurationDown:(CGFloat)arg0 durationUp:(CGFloat)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif