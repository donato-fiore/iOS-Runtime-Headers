// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAPBTLETRANSACTIONIDENTIFIER_H
#define HAPBTLETRANSACTIONIDENTIFIER_H

@class HMFObject;



@interface HAPBTLETransactionIdentifier : HMFObject

@property (readonly, nonatomic) unsigned char unsignedCharValue; // ivar: _unsignedCharValue


+(id)randomTransactionIdentifier;
+(unsigned char)generateRequestIdentifier;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)debugDescription;
-(id)description;
-(id)descriptionWithPointer:(BOOL)arg0 ;
-(id)initWithUnsignedCharValue:(unsigned char)arg0 ;
-(id)shortDescription;


@end


#endif