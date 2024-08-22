// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HAPMETADATATUPLE_H
#define HAPMETADATATUPLE_H

@class HMFObject, NSString;



@interface HAPMetadataTuple : HMFObject

@property (readonly, nonatomic) NSString *characteristicType; // ivar: _characteristicType
@property (readonly, nonatomic) NSString *index; // ivar: _index
@property (readonly, nonatomic) NSString *serviceType; // ivar: _serviceType


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCharacteristicType:(id)arg0 serviceType:(id)arg1 ;


@end


#endif