// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBBANNERGESTURERECOGNIZERPRIORITYASSERTION_H
#define SBBANNERGESTURERECOGNIZERPRIORITYASSERTION_H

@class NSString;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>


@interface SBBannerGestureRecognizerPriorityAssertion : NSObject <BSInvalidatable>

 {
    id *_invalidationHandler;
    id *_enablementChangeHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger priority; // ivar: _priority
@property (readonly, copy, nonatomic) NSString *reason; // ivar: _reason
@property (readonly) Class superclass;


+(BOOL)isValidBannerGestureRecognizerPriority:(NSInteger)arg0 ;
// -(id)initWithPriority:(NSInteger)arg0 reason:(id)arg1 enablementChangeHandler:(id)arg2 invalidationHandler:(unk)arg3  ;
-(void)dealloc;
-(void)invalidate;


@end


#endif