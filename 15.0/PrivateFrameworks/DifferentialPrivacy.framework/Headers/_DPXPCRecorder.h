// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DPXPCRECORDER_H
#define _DPXPCRECORDER_H

@class DPDataRecorder;


#import "_DPDaemonConnection.h"

@interface _DPXPCRecorder : DPDataRecorder

@property (readonly, nonatomic) _DPDaemonConnection *connection; // ivar: _connection


-(id)init;
-(id)initWithKey:(id)arg0 ;
-(void)handleReturn:(BOOL)arg0 forSelector:(id)arg1 key:(id)arg2 values:(id)arg3 error:(id)arg4 ;
-(void)recordBitValues:(id)arg0 ;
-(void)recordBitValues:(id)arg0 metadata:(id)arg1 ;
-(void)recordBitVectors:(id)arg0 ;
-(void)recordBitVectors:(id)arg0 metadata:(id)arg1 ;
-(void)recordFloatVectors:(id)arg0 ;
-(void)recordFloatVectors:(id)arg0 metadata:(id)arg1 ;
-(void)recordNumbers:(id)arg0 ;
-(void)recordNumbers:(id)arg0 metadata:(id)arg1 ;
-(void)recordStrings:(id)arg0 ;
-(void)recordStrings:(id)arg0 metadata:(id)arg1 ;
-(void)recordWords:(id)arg0 ;


@end


#endif