// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SMBPISTON_H
#define SMBPISTON_H

@class NSString, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "SMBSocket.h"

@interface SMBPiston : NSObject {
    smb_session session;
    int free_state_mutex;
    int free_credit_mutex;
    int free_credit_cond;
    int free_share_list_mutex;
    int free_session_mutex;
    _opaque_pthread_mutex_t state_mutex;
    _opaque_pthread_mutex_t share_list_mutex;
}


@property (retain) NSString *password; // ivar: _password
@property (retain) NSString *realm; // ivar: _realm
@property (retain) NSMutableDictionary *shareList; // ivar: _shareList
@property (weak) SMBSocket *sock; // ivar: _sock
@property (retain) NSString *userName; // ivar: _userName


-(id)getShare:(unsigned int)arg0 ;
-(id)init;
-(int)getPeerAddress:(struct sockaddr_storage *)arg0 withLength:(*unsigned int)arg1 ;
-(struct smb_session *)getSessionPtr;
-(unsigned int)getCreateOptions:(id)arg0 onShareID:(unsigned int)arg1 parentName:(id)arg2 streamName:(id)arg3 vnodeType:(int)arg4 fileAttributes:(unsigned int)arg5 checkForReparsePoint:(unsigned int)arg6 ;
-(unsigned int)getCreateOptions:(id)arg0 parentName:(id)arg1 streamName:(id)arg2 vnodeType:(int)arg3 fileAttributes:(unsigned int)arg4 checkForReparsePoint:(unsigned int)arg5 ;
-(void)dealloc;
-(void)disconnect;
-(void)ioctl:(struct smb_ioctl *)arg0 onShareID:(unsigned int)arg1 getDFSRefFor:(id)arg2 withRecvData:(id)arg3 callBack:(id)arg4 ;
-(void)ioctl:(struct smb_ioctl *)arg0 onShareID:(unsigned int)arg1 pipeWaitOnName:(id)arg2 withTimeOut:(NSInteger)arg3 callBack:(id)arg4 ;
-(void)leaseBreakAcknowledge:(struct smb_lease_break_ack *)arg0 callBack:(id)arg1 ;
-(void)login:(struct smb_login_out *)arg0 asUser:(id)arg1 withPassword:(id)arg2 inRealm:(id)arg3 callBack:(id)arg4 ;
-(void)logoff;
-(void)logoff:(struct smb_login_out *)arg0 callBack:(id)arg1 ;
-(void)negotiateTo:(id)arg0 netBIOSname:(id)arg1 outParameters:(struct smb_negotiate *)arg2 callBack:(id)arg3 ;
-(void)negotiateTo:(id)arg0 netBIOSname:(id)arg1 port:(unsigned short)arg2 outParameters:(struct smb_negotiate *)arg3 callBack:(id)arg4 ;
-(void)negotiateTo:(id)arg0 netBIOSname:(id)arg1 port:(unsigned short)arg2 withTimeOut:(unsigned int)arg3 outParameters:(struct smb_negotiate *)arg4 callBack:(id)arg5 ;
-(void)negotiateTo:(id)arg0 netBIOSname:(id)arg1 withVPNCookie:(id)arg2 outParameters:(struct smb_negotiate *)arg3 callBack:(id)arg4 ;
-(void)queryShareInformation:(struct smb_query_share *)arg0 forShareID:(unsigned int)arg1 forModelInfo:(id)arg2 forFileSystemName:(id)arg3 callBack:(id)arg4 ;
-(void)resolveID:(struct smb_create *)arg0 forShareID:(unsigned int)arg1 returnPath:(id)arg2 callBack:(id)arg3 ;
-(void)serverCopyFile:(struct smb_server_copy_file *)arg0 onShareID:(unsigned int)arg1 from:(id)arg2 to:(id)arg3 withOptions:(NSUInteger)arg4 callBack:(id)arg5 ;
-(void)setEventHandler:(id)arg0 ;
-(void)setOption:(char *)arg0 toValue:(unsigned int)arg1 ;
-(void)share_list_lock;
-(void)share_list_unlock;
-(void)treeConnect:(struct smb_tree_connect_disc *)arg0 toShare:(id)arg1 callBack:(id)arg2 ;
-(void)treeDisconnect:(struct smb_tree_connect_disc *)arg0 fromShareID:(unsigned int)arg1 callBack:(id)arg2 ;
-(void)validateNegotiate:(struct smb_ioctl *)arg0 callBack:(id)arg1 ;
-(void)validateNegotiate:(struct smb_ioctl *)arg0 onShareID:(unsigned int)arg1 callBack:(id)arg2 ;


@end


#endif