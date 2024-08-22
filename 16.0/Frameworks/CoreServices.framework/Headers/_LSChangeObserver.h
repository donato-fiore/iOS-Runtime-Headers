// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _LSCHANGEOBSERVER_H
#define _LSCHANGEOBSERVER_H


#import <Foundation/Foundation.h>


@interface _LSChangeObserver : NSObject {
    id *block;
    unsigned int uid;
    NotifyToken notifyToken;
    int coalescingFlag;
}






@end


#endif