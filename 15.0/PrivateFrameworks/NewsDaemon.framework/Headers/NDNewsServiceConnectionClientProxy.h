// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NDNEWSSERVICECONNECTIONCLIENTPROXY_H
#define NDNEWSSERVICECONNECTIONCLIENTPROXY_H

@class NSString;
@protocol NDNewsServiceClient;

#import <Foundation/Foundation.h>


@interface NDNewsServiceConnectionClientProxy : NSObject <NDNewsServiceClient>



@property (weak, nonatomic) NSObject<NDNewsServiceClient> *client; // ivar: _client
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)serviceHasNewTodayResults;


@end


#endif