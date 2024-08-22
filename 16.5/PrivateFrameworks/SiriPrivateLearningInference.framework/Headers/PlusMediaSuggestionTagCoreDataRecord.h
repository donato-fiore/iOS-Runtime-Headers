// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLUSMEDIASUGGESTIONTAGCOREDATARECORD_H
#define PLUSMEDIASUGGESTIONTAGCOREDATARECORD_H

@class NSManagedObject, NSString, NSSet;



@interface PlusMediaSuggestionTagCoreDataRecord : NSManagedObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSSet *taggedItem;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif