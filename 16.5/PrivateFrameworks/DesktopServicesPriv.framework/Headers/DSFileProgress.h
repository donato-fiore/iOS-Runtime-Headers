// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DSFILEPROGRESS_H
#define DSFILEPROGRESS_H


#import <Foundation/Foundation.h>


@interface DSFileProgress : NSObject {
    vector<TKeyValueObserver, std::allocator<TKeyValueObserver>> _observers;
}




-(void)progressChanged:(id)arg0 ;
-(void)startObserving:(id)arg0 ;
-(void)stopObserving;


@end


#endif