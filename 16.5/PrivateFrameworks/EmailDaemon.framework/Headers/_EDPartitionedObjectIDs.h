// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EDPARTITIONEDOBJECTIDS_H
#define _EDPARTITIONEDOBJECTIDS_H

@class NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface _EDPartitionedObjectIDs : NSObject

@property (readonly, copy, nonatomic) NSDictionary *groupedSenderObjectIDsByScope; // ivar: _groupedSenderObjectIDsByScope
@property (readonly, copy, nonatomic) NSArray *messageObjectIDs; // ivar: _messageObjectIDs
@property (readonly, copy, nonatomic) NSDictionary *threadObjectIDsByScope; // ivar: _threadObjectIDsByScope


-(id)initWithMessageObjectIDs:(id)arg0 threadObjectIDsByScope:(id)arg1 groupedSenderObjectIDsByScope:(id)arg2 ;


@end


#endif