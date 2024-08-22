// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAPBTLEREQUEST_H
#define HAPBTLEREQUEST_H

@class HMFObject, NSData, HMFBlockOperation, HMFTimer;


#import "HAPCharacteristic.h"
#import "HAPBTLEControlOutputStream.h"
#import "HAPBTLETransactionIdentifier.h"
#import "HAPService.h"

@interface HAPBTLERequest : HMFObject

@property (readonly, copy, nonatomic) NSData *body; // ivar: _body
@property (readonly, nonatomic) HAPCharacteristic *characteristic; // ivar: _characteristic
@property (retain, nonatomic) HAPBTLEControlOutputStream *controlOutputStream; // ivar: _controlOutputStream
@property (readonly, nonatomic, getter=isEncrypted) BOOL encrypted; // ivar: _encrypted
@property (readonly, nonatomic, getter=isFinished) BOOL finished; // ivar: _finished
@property (readonly, nonatomic) HAPBTLETransactionIdentifier *identifier; // ivar: _identifier
@property (weak, nonatomic) HMFBlockOperation *operation; // ivar: _operation
@property (retain, nonatomic) HMFTimer *responseTimer; // ivar: _responseTimer
@property (readonly, nonatomic) HAPService *service; // ivar: _service
@property (readonly, nonatomic) CGFloat timeoutInterval; // ivar: _timeoutInterval
@property (readonly, nonatomic) unsigned char type; // ivar: _type


-(id)_initWithCharacteristic:(id)arg0 requestType:(unsigned char)arg1 bodyData:(id)arg2 shouldEncrypt:(BOOL)arg3 timeoutInterval:(CGFloat)arg4 ;
-(id)_serializeHeader;
-(id)debugDescription;
-(id)description;
-(id)descriptionWithPointer:(BOOL)arg0 ;
-(id)init;
-(id)initWithCharacteristic:(id)arg0 requestType:(unsigned char)arg1 bodyData:(id)arg2 shouldEncrypt:(BOOL)arg3 timeoutInterval:(CGFloat)arg4 ;
-(id)initWithRequestType:(unsigned char)arg0 bodyData:(id)arg1 shouldEncrypt:(BOOL)arg2 timeoutInterval:(CGFloat)arg3 ;
-(id)serialize;
-(id)shortDescription;
-(void)cancelWithError:(id)arg0 ;


@end


#endif