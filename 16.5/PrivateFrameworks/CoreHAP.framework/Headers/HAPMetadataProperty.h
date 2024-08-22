// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAPMETADATAPROPERTY_H
#define HAPMETADATAPROPERTY_H

@class HMFObject, NSNumber, NSString;



@interface HAPMetadataProperty : HMFObject

@property (retain, nonatomic) NSNumber *bitPosition; // ivar: _bitPosition
@property (copy) NSString *propertyDescription; // ivar: _propertyDescription
@property (retain, nonatomic) NSString *propertyType; // ivar: _propertyType


+(id)init:(id)arg0 withDictionary:(id)arg1 ;
-(id)description;
-(id)generateDictionary;
-(id)initWithType:(id)arg0 bitPosition:(id)arg1 description:(id)arg2 ;
-(void)dump;


@end


#endif