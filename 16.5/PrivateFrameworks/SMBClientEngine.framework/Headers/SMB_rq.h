// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SMB_RQ_H
#define SMB_RQ_H

@class NSData;

#import <Foundation/Foundation.h>

#import "SMB_rq.h"
#import "SMBPiston.h"

@interface SMB_rq : NSObject {
    ? sr_link;
    ? sr_rq;
    ? sr_rp;
    ? _sr_sessionp;
}


@property unsigned int onEncryptedShare; // ivar: _onEncryptedShare
@property int replyError; // ivar: _replyError
@property *unsigned short sr_bcount; // ivar: _sr_bcount
@property (copy) id *sr_callback; // ivar: _sr_callback
@property unsigned short sr_command; // ivar: _sr_command
@property timespec sr_credit_timesent; // ivar: _sr_credit_timesent
@property unsigned short sr_creditcharge; // ivar: _sr_creditcharge
@property *unsigned short sr_creditchargep; // ivar: _sr_creditchargep
@property *unsigned short sr_creditreqp; // ivar: _sr_creditreqp
@property unsigned short sr_creditsrequested; // ivar: _sr_creditsrequested
@property unsigned int sr_extflags; // ivar: _sr_extflags
@property unsigned int sr_flags; // ivar: _sr_flags
@property *unsigned int sr_flagsp; // ivar: _sr_flagsp
@property *unsigned int sr_lcount; // ivar: _sr_lcount
@property NSUInteger sr_messageid; // ivar: _sr_messageid
@property *NSUInteger sr_messageidp; // ivar: _sr_messageidp
@property (retain) SMB_rq *sr_next_rqp; // ivar: _sr_next_rqp
@property unsigned int sr_nextcmd; // ivar: _sr_nextcmd
@property *unsigned int sr_nextcmdp; // ivar: _sr_nextcmdp
@property unsigned int sr_ntstatus; // ivar: _sr_ntstatus
@property (retain) SMBPiston *sr_pd; // ivar: _sr_pd
@property unsigned int sr_rqflags; // ivar: _sr_rqflags
@property NSUInteger sr_rqsessionid; // ivar: _sr_rqsessionid
@property char * sr_rqsigp; // ivar: _sr_rqsigp
@property unsigned int sr_rqtreeid; // ivar: _sr_rqtreeid
@property NSUInteger sr_rspasyncid; // ivar: _sr_rspasyncid
@property unsigned short sr_rspcreditsgranted; // ivar: _sr_rspcreditsgranted
@property unsigned int sr_rspflags; // ivar: _sr_rspflags
@property unsigned int sr_rspnextcmd; // ivar: _sr_rspnextcmd
@property unsigned int sr_rsppid; // ivar: _sr_rsppid
@property NSUInteger sr_rspsessionid; // ivar: _sr_rspsessionid
@property unsigned int sr_rsptreeid; // ivar: _sr_rsptreeid
@property ? sr_sessionp;
@property unsigned int sr_timeout; // ivar: _sr_timeout
@property timespec sr_timesent; // ivar: _sr_timesent
@property (retain) NSData *writeData; // ivar: _writeData
@property unsigned int writeLen; // ivar: _writeLen


-(void)smb_rq_callback:(int)arg0 ;


@end


#endif