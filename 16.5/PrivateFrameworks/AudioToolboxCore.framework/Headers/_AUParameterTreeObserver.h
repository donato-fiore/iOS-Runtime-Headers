// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _AUPARAMETERTREEOBSERVER_H
#define _AUPARAMETERTREEOBSERVER_H


#import <Foundation/Foundation.h>


@interface _AUParameterTreeObserver : NSObject

@property (copy, nonatomic) id *callback; // ivar: _callback


-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif