// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLDAEMONJOB_H
#define PLDAEMONJOB_H

@class PLXPCTransaction, PLAssetsdClient, NSXPCConnection;
@protocol NSSecureCoding, OS_xpc_object;

#import <Foundation/Foundation.h>

#import "PLLibraryServicesManager.h"

@interface PLDaemonJob : NSObject <NSSecureCoding>

 {
    NSObject<OS_xpc_object> *_xpcReply;
    PLXPCTransaction *_transaction;
    id *_replyHandler;
    NSUInteger _signpostId;
    PLLibraryServicesManager *_libraryServicesManager;
}


@property (readonly, nonatomic) PLAssetsdClient *assetsdClient; // ivar: _assetsdClient
@property (retain, nonatomic) NSXPCConnection *clientConnection;
@property (retain, nonatomic) NSXPCConnection *clientConnection; // ivar: _clientConnection
@property (retain, nonatomic) PLLibraryServicesManager *libraryServicesManager;
@property (copy, nonatomic) id *replyHandler;
@property (nonatomic) NSObject<OS_xpc_object> *xpcReply;
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcReply;


+(BOOL)supportsSecureCoding;
+(void)runDaemonSideWithXPCEvent:(id)arg0 libraryServicesManager:(id)arg1 ;
-(BOOL)shouldArchiveXPCToDisk;
-(BOOL)shouldRunOnDaemonSerialQueue;
-(NSInteger)daemonOperation;
-(id)description;
-(id)init;
-(id)initFromXPCObject:(id)arg0 libraryServicesManager:(id)arg1 ;
-(id)initWithAssetsdClient:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)newDictionaryReplyForObject:(id)arg0 ;
-(void)archiveXPCToDisk:(id)arg0 ;
-(void)encodeToXPCObject:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleReply;
-(void)run;
-(void)runDaemonSide;
-(void)sendToAssetsd;
-(void)sendToAssetsdWithReply;


@end


#endif