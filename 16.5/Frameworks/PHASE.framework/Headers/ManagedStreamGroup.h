// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MANAGEDSTREAMGROUP_H
#define MANAGEDSTREAMGROUP_H

@class NSUUID, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ManagedStreamGroup : NSObject

@property (retain, nonatomic) NSUUID *controllingClientID; // ivar: _controllingClientID
@property (retain, nonatomic) NSMutableDictionary *inputStreams; // ivar: _inputStreams
@property (retain, nonatomic) NSMutableDictionary *outputStreams; // ivar: _outputStreams
@property (copy, nonatomic) id *stateChangeBlock; // ivar: _stateChangeBlock


-(id)init;


@end


#endif