// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STCALL_H
#define STCALL_H



#import "STSiriModelObject.h"
#import "STContactAddress.h"

@interface STCall : STSiriModelObject {
    NSInteger _service;
    STContactAddress *_initiatorAddress;
    STContactAddress *_recipientAddress;
}




+(BOOL)supportsSecureCoding;
-(NSInteger)service;
-(id)_aceContextObjectValue;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initiatorAddress;
-(id)recipientAddress;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setInitiatorAddress:(id)arg0 ;
-(void)setRecipientAddress:(id)arg0 ;
-(void)setService:(NSInteger)arg0 ;


@end


#endif