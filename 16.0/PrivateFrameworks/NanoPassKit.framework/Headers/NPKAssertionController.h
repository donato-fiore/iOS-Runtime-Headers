// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKASSERTIONCONTROLLER_H
#define NPKASSERTIONCONTROLLER_H

@class NSMapTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NPKAssertionController : NSObject {
    id *_assertionFactory;
    id *_assertionInvalidator;
    NSMapTable *_assertionMaps;
    NSObject<OS_dispatch_queue> *_internalQueue;
}




// -(id)initWithAssertionFactory:(id)arg0 invalidator:(unk)arg1  ;
-(void)_inQueue_releaseAssertionWithOwner:(id)arg0 ;
-(void)_releaseAssertionFromOwnerObject:(id)arg0 withDelay:(CGFloat)arg1 completion:(id)arg2 ;
-(void)createAssertionForOwnerObject:(id)arg0 withReason:(id)arg1 ;
-(void)releaseAssertionFromOwnerObject:(id)arg0 ;
-(void)releaseAssertionFromOwnerObject:(id)arg0 withDelay:(CGFloat)arg1 ;
-(void)releaseAssertionFromOwnerObject:(id)arg0 withDelay:(CGFloat)arg1 completion:(id)arg2 ;


@end


#endif