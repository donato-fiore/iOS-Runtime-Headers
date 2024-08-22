// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKBUTTONLISTENER_H
#define NPKBUTTONLISTENER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NPKButtonListener : NSObject

@property (copy, nonatomic) id *buttonHandler; // ivar: _buttonHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue; // ivar: _handlerQueue


-(id)initWithHandlerQueue:(id)arg0 ;


@end


#endif