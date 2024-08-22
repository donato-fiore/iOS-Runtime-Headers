// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUKEYBAGPREVENTLOCKASSERTION_H
#define SUKEYBAGPREVENTLOCKASSERTION_H

@class NSString;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>


@interface SUKeybagPreventLockAssertion : NSObject <BSInvalidatable>

 {
    BOOL _invalidated;
    *__MKBAssertion _assertion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithKeybagAssertion:(struct __MKBAssertion *)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif