// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SMBDIRENUMERATOR_H
#define SMBDIRENUMERATOR_H

@class NSString;

#import <Foundation/Foundation.h>

#import "SMBPiston.h"
#import "SMBNode.h"
#import "SMB_rq.h"

@interface SMBDirEnumerator : NSObject {
    SMBPiston *pd;
    unsigned int f_shareID;
    int f_flags;
    int f_sfm_conversion;
    unsigned short f_searchCount;
    unsigned char f_infolevel;
    int f_attrmask;
    NSString *f_lookupName;
    NSString *f_createName;
    SMBNode *f_node;
    smb_query_dir f_query_inp;
    unsigned int f_query_buffer_len;
    unsigned char f_NetworkNameBuffer;
    unsigned int f_NetworkNameLen;
    smbfattr f_attr;
    unsigned int f_eofs;
    SMB_rq *f_create_rqp;
    SMB_rq *f_query_dir_rqp;
    int f_need_close;
    unsigned int f_resume_file_index;
    unsigned int f_output_buf_len;
}




+(void)enumeratorWithParameters:(id)arg0 onShareID:(unsigned int)arg1 dirName:(id)arg2 lookUpName:(id)arg3 searchFlags:(unsigned int)arg4 outParameters:(struct smb_dir_enum_out *)arg5 callBack:(id)arg6 ;
-(id)init:(id)arg0 onShareID:(unsigned int)arg1 dirName:(id)arg2 lookUpName:(id)arg3 searchFlags:(unsigned int)arg4 outParameters:(struct smb_dir_enum_out *)arg5 callBack:(id)arg6 ;
-(int)cleanup;
-(int)commonInit:(id)arg0 onShareID:(unsigned int)arg1 dirName:(id)arg2 lookUpName:(id)arg3 searchFlags:(unsigned int)arg4 outParameters:(struct smb_dir_enum_out *)arg5 ;
-(int)smb2_smb_parse_query_dir_both_dir_info:(struct mdchain *)arg0 ;
-(int)smb2_smb_query_dir:(*unsigned int)arg0 ;
-(int)smb2fs_smb_findnext:(*unsigned int)arg0 ;
-(void)close:(struct smb_dir_enum_out *)arg0 callBack:(id)arg1 ;
-(void)dealloc;
-(void)nextEntry:(id)arg0 outParameters:(struct smb_dir_enum_out *)arg1 callBack:(id)arg2 ;


@end


#endif