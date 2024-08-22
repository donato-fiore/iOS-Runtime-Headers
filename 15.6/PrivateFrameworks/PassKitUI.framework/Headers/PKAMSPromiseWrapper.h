// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKAMSPROMISEWRAPPER_H
#define PKAMSPROMISEWRAPPER_H

@class AMSPromise, NSString;
@protocol PKCancelable, PKInvalidatable;

#import <Foundation/Foundation.h>


@interface PKAMSPromiseWrapper : NSObject <PKCancelable, PKInvalidatable>

 {
    os_unfair_lock_s _lock;
    BOOL _invalidated;
    BOOL _canceled;
    AMSPromise *_promise;
}


@property (readonly, nonatomic, getter=isCanceled) BOOL canceled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithAMSPromise:(id)arg0 ;
-(void)cancel;
-(void)invalidate;


@end


#endif