// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLUSCONTACTSUGGESTIONTAGCOREDATARECORD_H
#define PLUSCONTACTSUGGESTIONTAGCOREDATARECORD_H

@class NSManagedObject, NSString, NSSet;



@interface PlusContactSuggestionTagCoreDataRecord : NSManagedObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSSet *taggedItem;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif