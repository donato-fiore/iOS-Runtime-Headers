// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSGROUPSESSIONKEYVALUEDELIVERY_H
#define IDSGROUPSESSIONKEYVALUEDELIVERY_H

@class NSString, NSMutableArray;
@protocol NSSecureCoding, IDSXPCGroupSessionKeyValueDelivery;

#import <Foundation/Foundation.h>


@interface IDSGroupSessionKeyValueDelivery : NSObject <NSSecureCoding>

 {
    NSString *_sessionID;
    id<IDSXPCGroupSessionKeyValueDelivery> *_xpc;
    NSMutableArray *_deliveryHandlers;
}




+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSessionID:(id)arg0 ;
-(void)_setUpXPC;
-(void)addDeliveryHandler:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeDeliveryHandler:(id)arg0 ;
-(void)sendData:(id)arg0 forKey:(unsigned int)arg1 encryption:(unsigned int)arg2 capability:(id)arg3 ;
-(void)sendData:(id)arg0 forKey:(unsigned int)arg1 encryption:(unsigned int)arg2 capability:(id)arg3 completionHandler:(id)arg4 ;
-(void)test_receiveData:(id)arg0 forKey:(unsigned int)arg1 fromParticipant:(NSUInteger)arg2 ;


@end


#endif