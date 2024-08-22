// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MANAGEDOUTPUTSTREAMGROUP_H
#define MANAGEDOUTPUTSTREAMGROUP_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ManagedOutputStreamGroup : NSObject

@property (nonatomic, getter=isControlled) BOOL controlled; // ivar: _controlled
@property (copy, nonatomic) id *stateChangeBlock; // ivar: _stateChangeBlock
@property (retain, nonatomic) NSMutableDictionary *streams; // ivar: _streams


-(id)init;


@end


#endif