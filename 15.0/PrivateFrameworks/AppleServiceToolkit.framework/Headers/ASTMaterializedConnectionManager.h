// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASTMATERIALIZEDCONNECTIONMANAGER_H
#define ASTMATERIALIZEDCONNECTIONMANAGER_H

@class NSString;
@protocol ASTConnectionStatusDelegate, ASTConnectionManager, ASTConnectionManagerDelegate;

#import <Foundation/Foundation.h>

#import "ASTIdentity.h"
#import "ASTNetworking.h"

@interface ASTMaterializedConnectionManager : NSObject <ASTConnectionStatusDelegate, ASTConnectionManager>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ASTConnectionManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) ASTIdentity *identity; // ivar: _identity
@property (retain, nonatomic) ASTNetworking *networking; // ivar: _networking
@property (retain, nonatomic) NSString *sessionId; // ivar: _sessionId
@property (readonly) Class superclass;


-(BOOL)postAuthInfo:(id)arg0 allowsCellularAccess:(BOOL)arg1 ;
-(BOOL)postProfile:(id)arg0 allowsCellularAccess:(BOOL)arg1 ;
-(id)init;
-(id)initWithSOCKSProxyServer:(id)arg0 port:(id)arg1 ;
-(id)postEnrollAllowingCellularAccess:(BOOL)arg0 ;
-(id)postRequest:(id)arg0 allowsCellularAccess:(BOOL)arg1 ;
-(void)cancelAllTestResults;
-(void)connection:(id)arg0 connectionStateChanged:(NSInteger)arg1 ;
-(void)connection:(id)arg0 didSendBodyData:(NSInteger)arg1 totalBytesSent:(NSInteger)arg2 totalBytesExpected:(NSInteger)arg3 ;
-(void)dealloc;
-(void)downloadAsset:(id)arg0 destinationFileHandle:(id)arg1 allowsCellularAccess:(BOOL)arg2 completion:(id)arg3 ;
-(void)postSealableFile:(id)arg0 fileSequence:(id)arg1 totalFiles:(id)arg2 testId:(id)arg3 dataId:(id)arg4 allowsCellularAccess:(BOOL)arg5 completion:(id)arg6 ;
-(void)postSessionExistsForIdentities:(id)arg0 ticket:(id)arg1 timeout:(CGFloat)arg2 allowsCellularAccess:(BOOL)arg3 completion:(id)arg4 ;
-(void)postTestResult:(id)arg0 allowsCellularAccess:(BOOL)arg1 completion:(id)arg2 ;


@end


#endif