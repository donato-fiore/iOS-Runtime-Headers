// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TKKEYPATHOBSERVER_H
#define TKKEYPATHOBSERVER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface TKKeyPathObserver : NSObject {
    id *_block;
    NSMutableArray *_observations;
}




-(id)initWithBlock:(id)arg0 ;
-(void)dealloc;
-(void)observe:(id)arg0 keyPath:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)stopObserving;


@end


#endif