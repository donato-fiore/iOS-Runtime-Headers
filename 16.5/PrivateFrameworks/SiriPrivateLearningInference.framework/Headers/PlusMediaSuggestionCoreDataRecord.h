// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLUSMEDIASUGGESTIONCOREDATARECORD_H
#define PLUSMEDIASUGGESTIONCOREDATARECORD_H

@class NSManagedObject, NSOrderedSet, NSUUID, NSData, NSString;


#import "PlusMediaReferenceCoreDataRecord.h"

@interface PlusMediaSuggestionCoreDataRecord : NSManagedObject

@property (nonatomic, retain) NSOrderedSet *contributingGroundTruth;
@property (nonatomic, copy) NSUUID *id;
@property (nonatomic, retain) PlusMediaReferenceCoreDataRecord *inferredMediaReference;
@property (nonatomic, copy) NSData *leftHandKey;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) CGFloat score;
@property (nonatomic, copy) NSData *scoreHistory;
@property (nonatomic, retain) NSOrderedSet *tags;
@property (nonatomic) CGFloat timestamp;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif