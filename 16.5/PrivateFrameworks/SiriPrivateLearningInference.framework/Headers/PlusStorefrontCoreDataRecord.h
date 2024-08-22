// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLUSSTOREFRONTCOREDATARECORD_H
#define PLUSSTOREFRONTCOREDATARECORD_H

@class NSManagedObject, NSString, NSSet;



@interface PlusStorefrontCoreDataRecord : NSManagedObject

@property (nonatomic, copy) NSString *countryCode;
@property (nonatomic, copy) NSString *storefrontId;
@property (nonatomic, retain) NSSet *storefrontMediaReferences;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif