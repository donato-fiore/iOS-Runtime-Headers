// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GCKEYBOARDEVENTOBSERVER_H
#define GCKEYBOARDEVENTOBSERVER_H

@protocol GCKeyboardEventObserverDelegate;

#import <Foundation/Foundation.h>


@interface GCKeyboardEventObserver : NSObject

@property (weak, nonatomic) NSObject<GCKeyboardEventObserverDelegate> *delegate; // ivar: _delegate


-(id)initWithDelegate:(id)arg0 ;
-(void)dealloc;


@end


#endif