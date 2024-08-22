// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNDUPLICATECOHORT_H
#define CNDUPLICATECOHORT_H

@class NSManagedObject, NSString, NSSet, NSData;



@interface CNDuplicateCohort : NSManagedObject

@property (nonatomic, copy) NSString *cropRectString;
@property (nonatomic, retain) NSSet *duplicates;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSData *imageData;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif