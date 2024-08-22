// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFUIKITPARAMETEREDITINGCONTROLLER_H
#define WFUIKITPARAMETEREDITINGCONTROLLER_H

@protocol WFUIKitParameterEditingControllerDelegate;

#import <Foundation/Foundation.h>


@interface WFUIKitParameterEditingController : NSObject

@property (weak, nonatomic) NSObject<WFUIKitParameterEditingControllerDelegate> *delegate; // ivar: _delegate


-(void)createViewControllerWithInitialState:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif