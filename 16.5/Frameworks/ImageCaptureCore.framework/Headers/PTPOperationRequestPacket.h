// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PTPOPERATIONREQUESTPACKET_H
#define PTPOPERATIONREQUESTPACKET_H


#import <Foundation/Foundation.h>


@interface PTPOperationRequestPacket : NSObject {
    int _numParameters;
    unsigned int _dataPhaseInfo;
    unsigned short _operationCode;
    unsigned int _transactionID;
    unsigned int _parameters;
}




-(id)contentForTCP;
-(id)contentForUSB;
-(id)contentForUSBUsingBuffer:(*void)arg0 capacity:(unsigned int)arg1 ;
-(id)description;
-(id)initWithOperationCode:(unsigned short)arg0 transactionID:(unsigned int)arg1 dataPhaseInfo:(unsigned int)arg2 ;
-(id)initWithOperationCode:(unsigned short)arg0 transactionID:(unsigned int)arg1 dataPhaseInfo:(unsigned int)arg2 numParameters:(unsigned int)arg3 parameters:(*unsigned int)arg4 ;
-(id)initWithOperationCode:(unsigned short)arg0 transactionID:(unsigned int)arg1 dataPhaseInfo:(unsigned int)arg2 parameter1:(unsigned int)arg3 ;
-(id)initWithOperationCode:(unsigned short)arg0 transactionID:(unsigned int)arg1 dataPhaseInfo:(unsigned int)arg2 parameter1:(unsigned int)arg3 parameter2:(unsigned int)arg4 ;
-(id)initWithOperationCode:(unsigned short)arg0 transactionID:(unsigned int)arg1 dataPhaseInfo:(unsigned int)arg2 parameter1:(unsigned int)arg3 parameter2:(unsigned int)arg4 parameter3:(unsigned int)arg5 ;
-(id)initWithOperationCode:(unsigned short)arg0 transactionID:(unsigned int)arg1 dataPhaseInfo:(unsigned int)arg2 parameter1:(unsigned int)arg3 parameter2:(unsigned int)arg4 parameter3:(unsigned int)arg5 parameter4:(unsigned int)arg6 ;
-(id)initWithOperationCode:(unsigned short)arg0 transactionID:(unsigned int)arg1 dataPhaseInfo:(unsigned int)arg2 parameter1:(unsigned int)arg3 parameter2:(unsigned int)arg4 parameter3:(unsigned int)arg5 parameter4:(unsigned int)arg6 parameter5:(unsigned int)arg7 ;
-(id)initWithTCPBuffer:(*void)arg0 ;
-(id)initWithUSBBuffer:(*void)arg0 ;
-(int)numParameters;
-(unsigned int)dataPhaseInfo;
-(unsigned int)parameter1;
-(unsigned int)parameter2;
-(unsigned int)parameter3;
-(unsigned int)parameter4;
-(unsigned int)parameter5;
-(unsigned int)parameterAtIndex:(unsigned int)arg0 ;
-(unsigned int)transactionID;
-(unsigned short)operationCode;
-(void)setDataPhaseInfo:(unsigned int)arg0 ;
-(void)setOperationCode:(unsigned short)arg0 ;
-(void)setParameter1:(unsigned int)arg0 ;
-(void)setParameter2:(unsigned int)arg0 ;
-(void)setParameter3:(unsigned int)arg0 ;
-(void)setParameter4:(unsigned int)arg0 ;
-(void)setParameter5:(unsigned int)arg0 ;
-(void)setPparameter:(unsigned int)arg0 atIndex:(unsigned int)arg1 ;
-(void)setTransactionID:(unsigned int)arg0 ;


@end


#endif