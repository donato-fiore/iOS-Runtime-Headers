// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GCVIRTUALCONTROLLER_H
#define GCVIRTUALCONTROLLER_H


#import <Foundation/Foundation.h>

#import "GCControllerView.h"
#import "GCController.h"

@interface GCVirtualController : NSObject {
    GCControllerView *_controllerView;
}


@property (readonly, weak, nonatomic) GCController *controller;


+(id)virtualControllerWithConfiguration:(id)arg0 ;
-(id)findKeyWindow;
-(id)initWithConfiguration:(id)arg0 ;
-(void)connectWithReplyHandler:(id)arg0 ;
-(void)dealloc;
-(void)disconnect;
-(void)refreshViewForKeyWindow;
-(void)updateConfigurationForElement:(id)arg0 configuration:(id)arg1 ;


@end


#endif