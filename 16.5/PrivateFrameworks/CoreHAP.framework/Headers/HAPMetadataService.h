// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAPMETADATASERVICE_H
#define HAPMETADATASERVICE_H

@class HMFObject, NSString, NSArray, NSSet, NSNumber;



@interface HAPMetadataService : HMFObject

@property (nonatomic) BOOL allowAssociatedService; // ivar: _allowAssociatedService
@property (retain, nonatomic) NSString *btleuuidStr; // ivar: _btleuuidStr
@property (retain, nonatomic) NSArray *linkedServices; // ivar: _linkedServices
@property (retain, nonatomic) NSSet *mandatoryCharacteristics; // ivar: _mandatoryCharacteristics
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSSet *optionalCharacteristics; // ivar: _optionalCharacteristics
@property (retain, nonatomic) NSNumber *properties; // ivar: _properties
@property (retain, nonatomic) NSString *svcDescription; // ivar: _svcDescription
@property (retain, nonatomic) NSString *uuidStr; // ivar: _uuidStr


-(id)description;
-(id)generateDictionary:(id)arg0 metadata:(id)arg1 ;
-(id)initWithName:(id)arg0 uuid:(id)arg1 description:(id)arg2 mandatoryChrTypes:(id)arg3 properties:(id)arg4 linkedServices:(id)arg5 ;
-(void)dump;


@end


#endif