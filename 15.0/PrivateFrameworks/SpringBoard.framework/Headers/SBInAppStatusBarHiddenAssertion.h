// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBINAPPSTATUSBARHIDDENASSERTION_H
#define SBINAPPSTATUSBARHIDDENASSERTION_H

@class NSString;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>


@interface SBInAppStatusBarHiddenAssertion : NSObject <BSInvalidatable>

 {
    NSString *_identifier;
    NSString *_reason;
    id *_invalidationBlock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithIdentifier:(id)arg0 forReason:(id)arg1 invalidationBlock:(id)arg2 ;
-(void)dealloc;
-(void)invalidate;
-(void)invalidateWithAnimation:(BOOL)arg0 ;


@end


#endif