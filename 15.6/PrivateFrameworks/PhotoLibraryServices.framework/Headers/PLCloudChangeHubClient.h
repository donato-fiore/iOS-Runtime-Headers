// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLCLOUDCHANGEHUBCLIENT_H
#define PLCLOUDCHANGEHUBCLIENT_H

@class NSUUID;

#import <Foundation/Foundation.h>


@interface PLCloudChangeHubClient : NSObject {
    unsigned char _nodeUUID;
}


@property (readonly, copy) NSUUID *uuid; // ivar: _uuid


-(id)fetchPendingEventsSinceIndex:(NSUInteger)arg0 ;
-(id)fetchResultsSinceIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithUUID:(id)arg0 ;
-(id)resultsFromReply:(id)arg0 sinceIndex:(NSUInteger)arg1 ;
-(id)successfulResultWithEvents:(id)arg0 changeHubEventIndex:(NSUInteger)arg1 ;
-(id)unsuccesfulResultWithWithType:(NSInteger)arg0 ;


@end


#endif