// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBMEDUSAHOSTEDKEYBOARDWINDOWLEVELASSERTION_H
#define SBMEDUSAHOSTEDKEYBOARDWINDOWLEVELASSERTION_H

@class NSString;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>


@interface SBMedusaHostedKeyboardWindowLevelAssertion : NSObject <BSInvalidatable>

 {
    id *_invalidationHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger priority; // ivar: _priority
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat windowLevel; // ivar: _windowLevel


-(id)initWithMedusaHostedKeyboardWindow:(id)arg0 priority:(NSUInteger)arg1 windowLevel:(CGFloat)arg2 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif