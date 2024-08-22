// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ENSTATUSCHANGEOBSERVER_H
#define ENSTATUSCHANGEOBSERVER_H


#import <Foundation/Foundation.h>


@interface ENStatusChangeObserver : NSObject {
    ? adapter;
    ? didChangeHandler;
}


@property (nonatomic) BOOL active; // ivar: active


-(id)init;
-(id)initWithAdapter:(id)arg0 didChangeHandler:(id)arg1 ;
-(void)dealloc;


@end


#endif