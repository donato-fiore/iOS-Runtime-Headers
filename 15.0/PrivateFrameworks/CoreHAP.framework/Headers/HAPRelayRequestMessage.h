// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAPRELAYREQUESTMESSAGE_H
#define HAPRELAYREQUESTMESSAGE_H

@class HMFObject, NSData, HMFBlockOperation, NSSet;



@interface HAPRelayRequestMessage : HMFObject

@property (readonly, copy, nonatomic) NSData *body; // ivar: _body
@property (readonly, nonatomic, getter=isEncrypted) BOOL encrypted;
@property (readonly, nonatomic, getter=isFinished) BOOL finished;
@property (weak, nonatomic) HMFBlockOperation *operation; // ivar: _operation
@property (readonly, nonatomic) NSSet *requestIdentifiers; // ivar: _requestIdentifiers
@property (readonly, nonatomic) BOOL sent;
@property (readonly, nonatomic) CGFloat timeout; // ivar: _timeout
@property (nonatomic) unsigned short transactionIdentifier; // ivar: _transactionIdentifier
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(id)debugDescription;
-(id)description;
-(id)initWithRequestData:(id)arg0 messageType:(NSUInteger)arg1 timeout:(CGFloat)arg2 ;
-(id)shortDescription;
-(void)addRequestIdentifier:(id)arg0 ;


@end


#endif