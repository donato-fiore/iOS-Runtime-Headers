// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PTPOPERATIONRESPONSEPACKET_H
#define PTPOPERATIONRESPONSEPACKET_H


#import <Foundation/Foundation.h>


@interface PTPOperationResponsePacket : NSObject {
    int _numParameters;
    unsigned short _responseCode;
    unsigned int _transactionID;
    unsigned int _parameters;
}




-(id)contentForTCP;
-(id)contentForUSB;
-(id)contentForUSBUsingBuffer:(*void)arg0 capacity:(unsigned int)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithResponseCode:(unsigned short)arg0 transactionID:(unsigned int)arg1 ;
-(id)initWithResponseCode:(unsigned short)arg0 transactionID:(unsigned int)arg1 numParameters:(unsigned int)arg2 parameters:(*unsigned int)arg3 ;
-(id)initWithResponseCode:(unsigned short)arg0 transactionID:(unsigned int)arg1 parameter1:(unsigned int)arg2 ;
-(id)initWithResponseCode:(unsigned short)arg0 transactionID:(unsigned int)arg1 parameter1:(unsigned int)arg2 parameter2:(unsigned int)arg3 ;
-(id)initWithResponseCode:(unsigned short)arg0 transactionID:(unsigned int)arg1 parameter1:(unsigned int)arg2 parameter2:(unsigned int)arg3 parameter3:(unsigned int)arg4 ;
-(id)initWithResponseCode:(unsigned short)arg0 transactionID:(unsigned int)arg1 parameter1:(unsigned int)arg2 parameter2:(unsigned int)arg3 parameter3:(unsigned int)arg4 parameter4:(unsigned int)arg5 ;
-(id)initWithResponseCode:(unsigned short)arg0 transactionID:(unsigned int)arg1 parameter1:(unsigned int)arg2 parameter2:(unsigned int)arg3 parameter3:(unsigned int)arg4 parameter4:(unsigned int)arg5 parameter5:(unsigned int)arg6 ;
-(id)initWithTCPBuffer:(*void)arg0 ;
-(id)initWithUSBBuffer:(*void)arg0 ;
-(int)numParameters;
-(unsigned int)parameter1;
-(unsigned int)parameter2;
-(unsigned int)parameter3;
-(unsigned int)parameter4;
-(unsigned int)parameter5;
-(unsigned int)parameterAtIndex:(unsigned int)arg0 ;
-(unsigned int)transactionID;
-(unsigned short)responseCode;
-(void)setNumParameters:(unsigned int)arg0 ;
-(void)setParameter1:(unsigned int)arg0 ;
-(void)setParameter2:(unsigned int)arg0 ;
-(void)setParameter3:(unsigned int)arg0 ;
-(void)setParameter4:(unsigned int)arg0 ;
-(void)setParameter5:(unsigned int)arg0 ;
-(void)setPparameter:(unsigned int)arg0 atIndex:(unsigned int)arg1 ;
-(void)setResponseCode:(unsigned short)arg0 ;
-(void)setTransactionID:(unsigned int)arg0 ;


@end


#endif