// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKXPCACTIVITY_H
#define CKXPCACTIVITY_H

@class NSString;
@protocol OS_xpc_object;

#import <Foundation/Foundation.h>


@interface CKXPCActivity : NSObject

@property (readonly, nonatomic) NSObject<OS_xpc_object> *activity; // ivar: _activity
@property (readonly, copy, nonatomic) NSObject<OS_xpc_object> *criteria; // ivar: _criteria
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL shouldBeDataBudgeted; // ivar: _shouldBeDataBudgeted
@property (readonly, nonatomic) NSInteger state;


-(id)initWithXPCActivity:(id)arg0 ;
-(struct _xpc_activity_eligibility_changed_handler_s *)addEligibilityChangedHandler:(id)arg0 ;
-(void)removeEligibilityChangedHandler:(struct _xpc_activity_eligibility_changed_handler_s *)arg0 ;


@end


#endif