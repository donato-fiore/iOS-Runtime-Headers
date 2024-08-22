// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FLITEMCHANGEOBSERVER_H
#define FLITEMCHANGEOBSERVER_H


#import <Foundation/Foundation.h>


@interface FLItemChangeObserver : NSObject {
    int _notifyToken;
    id *_itemChangeObserver;
}




+(id)observerWithChangeHandler:(id)arg0 ;
-(void)dealloc;
-(void)setItemChangeHandler:(id)arg0 ;
-(void)timerUpdated;


@end


#endif