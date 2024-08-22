// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COHOMEHUBADAPTER_H
#define COHOMEHUBADAPTER_H


#import <Foundation/Foundation.h>


@interface COHomeHubAdapter : NSObject

@property (readonly, nonatomic) NSObject *client; // ivar: _client
@property (readonly, nonatomic) NSObject *list; // ivar: _list


+(id)sharedInstance;
-(id)accessoryForPeerInstance:(id)arg0 usingHomeKitAdapter:(id)arg1 ;
-(id)accessoryIdentifierForPeerInstance:(id)arg0 usingHomeKitAdapter:(id)arg1 ;
-(id)init;


@end


#endif