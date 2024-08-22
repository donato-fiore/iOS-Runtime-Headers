// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMIFFARCHIVE_H
#define HMIFFARCHIVE_H

@class HMFObject, NSArray, NSDictionary;



@interface HMIFFArchive : HMFObject

@property (readonly) NSArray *allPersons;
@property (readonly) NSArray *allPersonsAndFaceCrops; // ivar: _allPersonsAndFaceCrops
@property (readonly) NSDictionary *ffData; // ivar: _ffData
@property (readonly) NSArray *homePersons;
@property (readonly) NSArray *homePersonsAndFaceCrops; // ivar: _homePersonsAndFaceCrops
@property (readonly) NSArray *photosPersons;
@property (readonly) NSArray *photosPersonsAndFaceCrops; // ivar: _photosPersonsAndFaceCrops


-(id)faceCropsForPerson:(id)arg0 ;
-(id)initWithJSONPath:(id)arg0 error:(*id)arg1 ;
-(id)sourceUUIDForPerson:(id)arg0 ;


@end


#endif