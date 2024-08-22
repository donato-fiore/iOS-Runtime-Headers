// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLTTESTIDSSERVICEDELEGATE_H
#define BLTTESTIDSSERVICEDELEGATE_H

@protocol IDSServiceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BLTTestIDSServiceDelegate : NSObject

@property (retain, nonatomic) NSObject<IDSServiceDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue




@end


#endif