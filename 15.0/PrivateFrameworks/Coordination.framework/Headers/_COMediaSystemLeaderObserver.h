// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _COMEDIASYSTEMLEADEROBSERVER_H
#define _COMEDIASYSTEMLEADEROBSERVER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _COMediaSystemLeaderObserver : NSObject

@property (readonly, copy, nonatomic) id *block; // ivar: _block
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue


-(id)initWithDispatchQueue:(id)arg0 block:(id)arg1 ;


@end


#endif