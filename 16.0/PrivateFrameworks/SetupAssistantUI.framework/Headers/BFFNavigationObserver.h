// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BFFNAVIGATIONOBSERVER_H
#define BFFNAVIGATIONOBSERVER_H

@protocol BFFNavigationControllerDelegate;

#import <Foundation/Foundation.h>


@interface BFFNavigationObserver : NSObject

@property (weak, nonatomic) NSObject<BFFNavigationControllerDelegate> *observer; // ivar: _observer


+(id)observerWithObserver:(id)arg0 ;


@end


#endif