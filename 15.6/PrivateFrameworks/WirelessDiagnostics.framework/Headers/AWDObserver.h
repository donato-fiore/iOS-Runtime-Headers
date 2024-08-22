// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AWDOBSERVER_H
#define AWDOBSERVER_H

@protocol AWDObserverDelegate;

#import <Foundation/Foundation.h>


@interface AWDObserver : NSObject {
    shared_ptr<AWDObserverConnection> observerConnection;
}


@property (weak, nonatomic) NSObject<AWDObserverDelegate> *delegate; // ivar: _delegate


-(id)init;
-(void)setConfiguration:(id)arg0 callback:(id)arg1 ;


@end


#endif