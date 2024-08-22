// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HAPBTLERESPONSE_H
#define HAPBTLERESPONSE_H

@class HMFObject, NSMutableData, NSData;


#import "HAPBTLETransactionIdentifier.h"
#import "HAPBTLERequest.h"

@interface HAPBTLEResponse : HMFObject

@property (retain, nonatomic, setter=_setInternalBody:) NSMutableData *_internalBody; // ivar: __internalBody
@property (copy, nonatomic) NSData *body; // ivar: _body
@property (readonly, nonatomic, getter=isBodyComplete) BOOL bodyComplete;
@property (readonly, nonatomic) NSUInteger bodyLength; // ivar: _bodyLength
@property (readonly, nonatomic, getter=isComplete) BOOL complete;
@property (readonly, nonatomic, getter=isEncrypted) BOOL encrypted;
@property (nonatomic, getter=isHeaderComplete) BOOL headerComplete; // ivar: _headerComplete
@property (readonly, nonatomic) HAPBTLETransactionIdentifier *identifier; // ivar: _identifier
@property (readonly, nonatomic) HAPBTLERequest *request; // ivar: _request
@property (readonly, nonatomic) unsigned char statusCode; // ivar: _statusCode
@property (readonly, nonatomic, getter=isValid) BOOL valid;


-(NSUInteger)_deserializeHeaderBodyLengthWithData:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)_deserializeHeaderWithData:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)_remainingBodyLength;
-(NSUInteger)appendData:(id)arg0 error:(*id)arg1 ;
-(id)debugDescription;
-(id)description;
-(id)descriptionWithPointer:(BOOL)arg0 ;
-(id)init;
-(id)initWithRequest:(id)arg0 ;
-(id)shortDescription;


@end


#endif