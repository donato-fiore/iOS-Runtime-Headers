// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMOTEUIMANAGERCONFIG_H
#define REMOTEUIMANAGERCONFIG_H

@protocol RemoteUIActivating, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface RemoteUIManagerConfig : NSObject

@property (nonatomic) CGFloat activateTimeout; // ivar: _activateTimeout
@property (retain, nonatomic) NSObject<RemoteUIActivating> *activator; // ivar: _activator
@property (nonatomic) CGFloat deactivateTimeout; // ivar: _deactivateTimeout
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)init;


@end


#endif