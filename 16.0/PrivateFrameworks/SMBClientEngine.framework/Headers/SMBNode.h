// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SMBNODE_H
#define SMBNODE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "SMBPiston.h"

@interface SMBNode : NSObject {
    SMB_rq" rqp;
}


@property NSUInteger cmpdNextCmdOffset; // ivar: _cmpdNextCmdOffset
@property ? fid; // ivar: _fid
@property int isCmpd; // ivar: _isCmpd
@property unsigned int isOpen; // ivar: _isOpen
@property unsigned int marshallPos; // ivar: _marshallPos
@property (copy) NSString *name; // ivar: _name
@property unsigned int onEncryptedShare; // ivar: _onEncryptedShare
@property unsigned int parsePos; // ivar: _parsePos
@property (retain) SMBPiston *pd; // ivar: _pd
@property unsigned int shareID; // ivar: _shareID
@property (copy) NSString *streamName; // ivar: _streamName
@property unsigned int treeID; // ivar: _treeID


+(void)nodeForCmpd:(id)arg0 onShareID:(unsigned int)arg1 callBack:(id)arg2 ;
+(void)nodeWithParameters:(struct smb_create *)arg0 onPiston:(id)arg1 onShareID:(unsigned int)arg2 withName:(id)arg3 withStreamName:(id)arg4 callBack:(id)arg5 ;
-(?)parseNextHeader:(?)arg0 retNTStatusretMdpp;
-(id)init:(id)arg0 ;
-(id)init:(struct smb_create *)arg0 onPiston:(id)arg1 onShareID:(unsigned int)arg2 withName:(id)arg3 withStreamName:(id)arg4 callBack:(id)arg5 ;
-(id)initForCmpd:(id)arg0 onShareID:(unsigned int)arg1 ;
-(int)cmpdAddClose:(struct smb_close *)arg0 withFlags:(unsigned short)arg1 ;
-(int)cmpdAddCreate:(struct smb_create *)arg0 withName:(id)arg1 withStreamName:(id)arg2 ;
-(int)cmpdAddIoctl:(struct smb_ioctl *)arg0 getReparsePoint:(id)arg1 ;
-(int)cmpdAddIoctl:(struct smb_ioctl *)arg0 pipeTransceive:(id)arg1 withRecvData:(id)arg2 ;
-(int)cmpdAddIoctl:(struct smb_ioctl *)arg0 setReparsePoint:(id)arg1 ;
-(int)cmpdAddQueryDirectory:(struct smb_query_dir *)arg0 onDir:(id)arg1 returnDataIn:(id)arg2 ;
-(int)cmpdAddQueryInformation:(struct smb_query_info *)arg0 withStreamName:(id)arg1 forFileAllInfo:(id)arg2 withInputBuffer:(id)arg3 withOutputBuffer:(id)arg4 ;
-(int)cmpdAddRead:(struct smb_read_write *)arg0 intoBuffer:(id)arg1 ;
-(int)cmpdAddSetInformation:(struct smb_setinfo *)arg0 withInputBuffer:(id)arg1 withRenameTarget:(id)arg2 ;
-(int)cmpdAddWrite:(struct smb_read_write *)arg0 fromBuffer:(id)arg1 ;
-(int)cmpdParseClose:(struct smb_close *)arg0 withFlags:(unsigned short)arg1 ;
-(int)cmpdParseCreate:(struct smb_create *)arg0 ;
-(int)cmpdParseIoctl:(struct smb_ioctl *)arg0 reparsePoint:(id)arg1 sendInputBuffer:(id)arg2 rcvOutputBuffer:(id)arg3 ;
-(int)cmpdParseQueryDirectory:(struct smb_query_dir *)arg0 returnDataIn:(id)arg1 ;
-(int)cmpdParseQueryInformation:(struct smb_query_info *)arg0 withStreamName:(id)arg1 forFileAllInfo:(id)arg2 withOutputBuffer:(id)arg3 ;
-(int)cmpdParseRead:(struct smb_read_write *)arg0 intoBuffer:(id)arg1 ;
-(int)cmpdParseSetInformation:(struct smb_setinfo *)arg0 ;
-(int)cmpdParseWrite:(struct smb_read_write *)arg0 ;
-(int)commonInit:(id)arg0 onShareID:(unsigned int)arg1 ;
-(int)commonInit:(id)arg0 onShareID:(unsigned int)arg1 name:(id)arg2 streamName:(id)arg3 ;
-(void)changeNotify:(struct smb_change_notify *)arg0 withFlags:(unsigned short)arg1 withFilter:(unsigned int)arg2 returnDataIn:(id)arg3 callBack:(id)arg4 ;
-(void)close:(struct smb_close *)arg0 withFlags:(unsigned short)arg1 callBack:(id)arg2 ;
-(void)dealloc;
-(void)flush:(struct smb_flush *)arg0 callBack:(id)arg1 ;
-(void)ioctl:(struct smb_ioctl *)arg0 getReparsePoint:(id)arg1 callBack:(id)arg2 ;
-(void)ioctl:(struct smb_ioctl *)arg0 pipeTransceive:(id)arg1 withRecvData:(id)arg2 callBack:(id)arg3 ;
-(void)ioctl:(struct smb_ioctl *)arg0 setReparsePoint:(id)arg1 callBack:(id)arg2 ;
-(void)lockUnlock:(struct smb_lock *)arg0 callBack:(id)arg1 ;
-(void)queryDirectory:(struct smb_query_dir *)arg0 onDir:(id)arg1 returnDataIn:(id)arg2 callBack:(id)arg3 ;
-(void)queryInformation:(struct smb_query_info *)arg0 withStreamName:(id)arg1 forFileAllInfo:(id)arg2 withInputBuffer:(id)arg3 withOutputBuffer:(id)arg4 callBack:(id)arg5 ;
-(void)read:(struct smb_read_write *)arg0 intoBuffer:(id)arg1 callBack:(id)arg2 ;
-(void)sendCmpdRequest:(id)arg0 ;
-(void)setInformation:(struct smb_setinfo *)arg0 withInputBuffer:(id)arg1 withRenameTarget:(id)arg2 callBack:(id)arg3 ;
-(void)write:(struct smb_read_write *)arg0 fromBuffer:(id)arg1 callBack:(id)arg2 ;


@end


#endif