// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NMSFTP_H
#define NMSFTP_H


#import <Foundation/Foundation.h>

#import "NMSSHSession.h"

@interface NMSFTP : NSObject

@property (nonatomic, getter=isConnected) BOOL connected; // ivar: _connected
@property (retain, nonatomic) NMSSHSession *session; // ivar: _session
@property (nonatomic) *_LIBSSH2_SFTP sftpSession; // ivar: _sftpSession


+(id)connectWithSession:(id)arg0 ;
-(BOOL)appendContents:(id)arg0 toFileAtPath:(id)arg1 ;
-(BOOL)appendStream:(id)arg0 toFileAtPath:(id)arg1 ;
-(BOOL)connect;
-(BOOL)copyContentsOfPath:(id)arg0 toFileAtPath:(id)arg1 progress:(id)arg2 ;
-(BOOL)createDirectoryAtPath:(id)arg0 ;
-(BOOL)createSymbolicLinkAtPath:(id)arg0 withDestinationPath:(id)arg1 ;
-(BOOL)directoryExistsAtPath:(id)arg0 ;
-(BOOL)fileExistsAtPath:(id)arg0 ;
-(BOOL)moveItemAtPath:(id)arg0 toPath:(id)arg1 ;
-(BOOL)removeDirectoryAtPath:(id)arg0 ;
-(BOOL)removeFileAtPath:(id)arg0 ;
-(BOOL)writeContents:(id)arg0 toFileAtPath:(id)arg1 ;
-(BOOL)writeContents:(id)arg0 toFileAtPath:(id)arg1 progress:(id)arg2 ;
-(BOOL)writeFileAtPath:(id)arg0 toFileAtPath:(id)arg1 ;
-(BOOL)writeFileAtPath:(id)arg0 toFileAtPath:(id)arg1 progress:(id)arg2 ;
-(BOOL)writeStream:(id)arg0 toFileAtPath:(id)arg1 ;
-(BOOL)writeStream:(id)arg0 toFileAtPath:(id)arg1 progress:(id)arg2 ;
-(BOOL)writeStream:(id)arg0 toSFTPHandle:(struct _LIBSSH2_SFTP_HANDLE *)arg1 ;
-(BOOL)writeStream:(id)arg0 toSFTPHandle:(struct _LIBSSH2_SFTP_HANDLE *)arg1 progress:(id)arg2 ;
-(id)contentsAtPath:(id)arg0 ;
-(id)contentsAtPath:(id)arg0 progress:(id)arg1 ;
-(id)contentsOfDirectoryAtPath:(id)arg0 ;
-(id)infoForFileAtPath:(id)arg0 ;
-(id)initWithSession:(id)arg0 ;
-(struct _LIBSSH2_SFTP_HANDLE *)openDirectoryAtPath:(id)arg0 ;
-(struct _LIBSSH2_SFTP_HANDLE *)openFileAtPath:(id)arg0 flags:(NSUInteger)arg1 mode:(NSInteger)arg2 ;
-(void)disconnect;


@end


#endif