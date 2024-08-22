// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HSACCOUNTSTORE_H
#define HSACCOUNTSTORE_H

@class NSString, ICURLRequest;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HSAccountStore : NSObject {
    int _defaultsDidChangeToken;
}


@property (copy, nonatomic) NSString *appleID;
@property (copy, nonatomic) NSString *groupID;
@property (retain, nonatomic) ICURLRequest *groupIDRequest; // ivar: _groupIDRequest
@property (copy, nonatomic) NSString *password;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)defaultStore;
-(BOOL)canDetermineGroupID;
-(id)init;
-(void)_onBackgroundQueue_determineGroupIDWithCompletionHandler:(id)arg0 ;
-(void)clearAllCredentials;
-(void)clearCaches;
-(void)clearGroupID;
-(void)dealloc;
-(void)determineGroupIDWithCompletionHandler:(id)arg0 ;


@end


#endif