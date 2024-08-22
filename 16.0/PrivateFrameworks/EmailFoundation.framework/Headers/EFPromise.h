// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EFPROMISE_H
#define EFPROMISE_H

@class NSString;
@protocol EFCancelable;

#import <Foundation/Foundation.h>

#import "EFFuture.h"

@interface EFPromise : NSObject <EFCancelable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) EFFuture *future; // ivar: _future
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)promise;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)init;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)cancel;


@end


#endif