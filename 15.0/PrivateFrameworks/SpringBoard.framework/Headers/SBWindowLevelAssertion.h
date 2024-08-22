// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBWINDOWLEVELASSERTION_H
#define SBWINDOWLEVELASSERTION_H

@class NSString;
@protocol BSDescriptionProviding, BSInvalidatable;

#import <Foundation/Foundation.h>


@interface SBWindowLevelAssertion : NSObject <BSDescriptionProviding, BSInvalidatable>

 {
    id *_invalidationHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger priority; // ivar: _priority
@property (readonly, copy, nonatomic) NSString *reason; // ivar: _reason
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat windowLevel; // ivar: _windowLevel


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithPriority:(NSInteger)arg0 windowLevel:(CGFloat)arg1 reason:(id)arg2 invalidationHandler:(id)arg3 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)invalidate;


@end


#endif