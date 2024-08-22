// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCOPERATIONEXTERNALSIGNAL_H
#define FCOPERATIONEXTERNALSIGNAL_H

@class NSString;
@protocol FCOperationRetrySignal, OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface FCOperationExternalSignal : NSObject <FCOperationRetrySignal>

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