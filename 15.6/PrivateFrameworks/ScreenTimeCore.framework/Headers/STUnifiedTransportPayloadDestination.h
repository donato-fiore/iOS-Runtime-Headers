// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STUNIFIEDTRANSPORTPAYLOADDESTINATION_H
#define STUNIFIEDTRANSPORTPAYLOADDESTINATION_H

@class NSString;
@protocol NSCopying, NSSecureCoding, STSerializableManagedObject;

#import <Foundation/Foundation.h>


@interface STUnifiedTransportPayloadDestination : NSObject <NSCopying, NSSecureCoding, STSerializableManagedObject>



@property (readonly, copy, nonatomic) NSString *address; // ivar: _address
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)updateWithDictionaryRepresentation:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithAddress:(id)arg0 type:(id)arg1 ;
-(id)initWithAddress:(id)arg0 type:(id)arg1 state:(NSUInteger)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDSID:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif