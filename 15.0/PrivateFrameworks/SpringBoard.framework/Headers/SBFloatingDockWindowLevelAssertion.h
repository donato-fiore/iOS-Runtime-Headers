// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFLOATINGDOCKWINDOWLEVELASSERTION_H
#define SBFLOATINGDOCKWINDOWLEVELASSERTION_H

@class NSString;
@protocol BSDescriptionProviding, BSInvalidatable;

#import <Foundation/Foundation.h>


@interface SBFloatingDockWindowLevelAssertion : NSObject <BSDescriptionProviding, BSInvalidatable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat level; // ivar: _level
@property (readonly, nonatomic) NSUInteger priority; // ivar: _priority
@property (readonly, copy, nonatomic) NSString *reason; // ivar: _reason
@property (readonly) Class superclass;


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithPriority:(NSUInteger)arg0 level:(CGFloat)arg1 reason:(id)arg2 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)dealloc;
-(void)invalidate;


@end


#endif