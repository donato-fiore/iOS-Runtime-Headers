// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SBUIPRESENTABLEDISMISSALPREVENTIONASSERTION_H
#define _SBUIPRESENTABLEDISMISSALPREVENTIONASSERTION_H

@class NSString;
@protocol SBUIPresentableDismissalPreventionAssertion;

#import <Foundation/Foundation.h>


@interface _SBUIPresentableDismissalPreventionAssertion : NSObject <SBUIPresentableDismissalPreventionAssertion>

 {
    id *_invalidationHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger dismissalSource; // ivar: _dismissalSource
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *reason; // ivar: _reason
@property (readonly) Class superclass;


+(BOOL)_isValidBannerDismissalSource:(NSInteger)arg0 ;
-(id)initWithDismissalSource:(NSInteger)arg0 reason:(id)arg1 invalidationHandler:(id)arg2 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif