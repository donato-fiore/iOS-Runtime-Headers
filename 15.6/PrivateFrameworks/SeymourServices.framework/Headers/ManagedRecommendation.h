// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MANAGEDRECOMMENDATION_H
#define MANAGEDRECOMMENDATION_H

@class NSManagedObject, NSString;



@interface ManagedRecommendation : NSManagedObject

@property (nonatomic) int index;
@property (nonatomic, copy) NSString *reason;
@property (nonatomic, copy) NSString *referenceIdentifier;
@property (nonatomic, copy) NSString *referenceType;
@property (nonatomic, copy) NSString *shelfMarker;
@property (nonatomic, copy) NSString *source;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif