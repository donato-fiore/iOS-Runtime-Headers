// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RCOPERATIONEXTERNALSIGNAL_H
#define RCOPERATIONEXTERNALSIGNAL_H

@class NSString;
@protocol RCOperationRetrySignal, OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface RCOperationExternalSignal : NSObject <RCOperationRetrySignal>

 {
    BOOL _result;
    NSObject<OS_dispatch_group> *_group;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)onQueue:(id)arg0 signal:(id)arg1 ;
-(void)triggerWithRetry:(BOOL)arg0 ;


@end


#endif