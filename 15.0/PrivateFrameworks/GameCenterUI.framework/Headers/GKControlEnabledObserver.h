// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKCONTROLENABLEDOBSERVER_H
#define GKCONTROLENABLEDOBSERVER_H

@class UIControl;

#import <Foundation/Foundation.h>


@interface GKControlEnabledObserver : NSObject {
    UIControl *_control;
    id *_block;
}




-(id)initWithControl:(id)arg0 block:(id)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif