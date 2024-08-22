// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APODMLSTORESERVERCONTAINER_H
#define APODMLSTORESERVERCONTAINER_H

@class NSURL, NSXPCStoreServer;


#import "APOdmlSingleton.h"

@interface APOdmlStoreServerContainer : APOdmlSingleton

@property (readonly, nonatomic) NSURL *modelURL; // ivar: _modelURL
@property (readonly, nonatomic) NSXPCStoreServer *storeServer; // ivar: _storeServer


+(id)sharedInstance;
-(id)init;
-(void)startListening;


@end


#endif