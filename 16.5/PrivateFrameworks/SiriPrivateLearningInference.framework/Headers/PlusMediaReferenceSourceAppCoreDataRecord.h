// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLUSMEDIAREFERENCESOURCEAPPCOREDATARECORD_H
#define PLUSMEDIAREFERENCESOURCEAPPCOREDATARECORD_H

@class NSManagedObject, NSSet, NSString;



@interface PlusMediaReferenceSourceAppCoreDataRecord : NSManagedObject

@property (nonatomic, retain) NSSet *appMediaReferences;
@property (nonatomic, copy) NSString *name;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif