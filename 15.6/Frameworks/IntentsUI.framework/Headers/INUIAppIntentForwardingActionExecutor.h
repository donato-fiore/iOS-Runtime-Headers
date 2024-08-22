// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INUIAPPINTENTFORWARDINGACTIONEXECUTOR_H
#define INUIAPPINTENTFORWARDINGACTIONEXECUTOR_H

@class UIApplication, NSString;
@protocol INIntentDeliveringDelegate;

#import <Foundation/Foundation.h>


@interface INUIAppIntentForwardingActionExecutor : NSObject <INIntentDeliveringDelegate>

 {
    id *_handlerForIntent;
}


@property (retain, nonatomic) UIApplication *application; // ivar: _application
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithApplication:(id)arg0 ;
-(void)executeAction:(id)arg0 completionHandler:(id)arg1 ;
-(void)intentDeliverer:(id)arg0 deliverIntent:(id)arg1 withBlock:(id)arg2 ;


@end


#endif