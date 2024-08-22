// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBSAPPLICATIONTERMINATIONASSERTION_H
#define FBSAPPLICATIONTERMINATIONASSERTION_H

@class BKSTerminationAssertion, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FBSApplicationTerminationAssertion : NSObject {
    BKSTerminationAssertion *_assertion;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_bundleID;
    NSString *_reason;
    NSInteger _assertionState;
}


@property (readonly, nonatomic) NSInteger assertionState;
@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, copy, nonatomic) NSString *reason;


+(id)_queue;
-(id)description;
-(id)initWithBundleID:(id)arg0 reason:(id)arg1 acquisitionHandler:(id)arg2 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif