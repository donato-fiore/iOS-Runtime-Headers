// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INAPPINTENTDISPATCHER_H
#define INAPPINTENTDISPATCHER_H

@class NSString;
@protocol INIntentDeliveringDelegate;

#import <Foundation/Foundation.h>


@interface INAppIntentDispatcher : NSObject <INIntentDeliveringDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<INIntentDeliveringDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDelegate:(id)arg0 ;
-(void)dispatchIntentForwardingAction:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif