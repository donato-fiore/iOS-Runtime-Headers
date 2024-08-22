// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MFNETWORKOBSERVER_H
#define _MFNETWORKOBSERVER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _MFNetworkObserver : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id *_block;
}




// -(id)initWithBlock:(id)arg0 queue:(unk)arg1  ;
-(void)execute;


@end


#endif