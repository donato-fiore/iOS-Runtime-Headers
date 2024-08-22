// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OBSCROLLVIEWWEAKLAYOUTOBSERVER_H
#define OBSCROLLVIEWWEAKLAYOUTOBSERVER_H

@protocol _UIScrollViewLayoutObserver;

#import <Foundation/Foundation.h>

#import "OBScrollViewWeakLayoutObserver.h"

@interface OBScrollViewWeakLayoutObserver : NSObject <_UIScrollViewLayoutObserver>

 {
    OBScrollViewWeakLayoutObserver *_selfReference;
    id<_UIScrollViewLayoutObserver> *_weakLayoutObserver;
}




-(id)initWithLayoutObserver:(id)arg0 ;
-(void)_scrollViewDidLayoutSubviews:(id)arg0 ;


@end


#endif