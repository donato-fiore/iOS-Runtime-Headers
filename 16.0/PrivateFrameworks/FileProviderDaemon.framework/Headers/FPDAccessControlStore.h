// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPDACCESSCONTROLSTORE_H
#define FPDACCESSCONTROLSTORE_H

@class PQLConnection, NSURL;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FPDAccessControlStore : NSObject {
    PQLConnection *_dbConnection;
    NSURL *_databaseBaseURL;
    BOOL _dbIsOpen;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // ivar: _syncQueue


+(id)sharedStore;
-(BOOL)lookupLRUSignature:(id)arg0 ;
-(id)bookmarkForItemID:(id)arg0 consumerIdentifier:(id)arg1 ;
-(id)init;
-(id)initWithDatabaseBaseURL:(id)arg0 ;
-(id)keyForBundleIdentifier:(id)arg0 generateIfNotFound:(BOOL)arg1 keyGenBlock:(id)arg2 ;
-(id)parseUnverifiedBookmark:(id)arg0 ;
-(id)verifyBookmark:(id)arg0 auditToken:(struct ? )arg1 consumerIdentifier:(id)arg2 ;
-(void)addLRUSignature:(id)arg0 ;
-(void)dealloc;
-(void)openDatabase;
-(void)performWithDBConnection:(id)arg0 ;
-(void)reopenDatabaseAfterUnlock;
-(void)validateDatabase:(id)arg0 ;


@end


#endif