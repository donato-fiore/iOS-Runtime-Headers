// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APODMLSTORESERVERCONTAINER_H
#define APODMLSTORESERVERCONTAINER_H

@class NSError, NSURL, NSXPCStoreServer;


#import "APOdmlSingleton.h"
#import "APOdmlUnfairLock.h"

@interface APOdmlStoreServerContainer : APOdmlSingleton

@property (nonatomic) BOOL isListening; // ivar: _isListening
@property (retain, nonatomic) NSError *listeningError; // ivar: _listeningError
@property (readonly, nonatomic) APOdmlUnfairLock *listeningLock; // ivar: _listeningLock
@property (readonly, nonatomic) NSURL *modelURL; // ivar: _modelURL
@property (retain, nonatomic) NSXPCStoreServer *storeServer; // ivar: _storeServer


+(id)sharedInstance;
-(id)init;
-(id)storeServerForModelURL:(id)arg0 ;
-(void)_startListening:(id)arg0 ;
-(void)startListening;


@end


#endif