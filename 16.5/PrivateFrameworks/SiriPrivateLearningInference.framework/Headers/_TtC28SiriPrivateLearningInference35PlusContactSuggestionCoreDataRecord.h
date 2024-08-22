// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC28SIRIPRIVATELEARNINGINFERENCE35PLUSCONTACTSUGGESTIONCOREDATARECORD_H
#define _TTC28SIRIPRIVATELEARNINGINFERENCE35PLUSCONTACTSUGGESTIONCOREDATARECORD_H

@class NSManagedObject, NSOrderedSet, NSString, NSUUID, NSData;


#import "_TtC28SiriPrivateLearningInference34PlusContactReferenceCoreDataRecord.h"

@interface _TtC28SiriPrivateLearningInference35PlusContactSuggestionCoreDataRecord : NSManagedObject

@property (nonatomic, retain) NSOrderedSet *contributingGroundTruth;
@property (nonatomic, copy) NSString *fullName;
@property (nonatomic, copy) NSString *handleLabel;
@property (nonatomic, copy) NSUUID *id;
@property (nonatomic, retain) _TtC28SiriPrivateLearningInference34PlusContactReferenceCoreDataRecord *inferredContactReference;
@property (nonatomic) CGFloat score;
@property (nonatomic, copy) NSData *scoreHistory;
@property (nonatomic, retain) NSOrderedSet *tags;
@property (nonatomic) CGFloat timestamp;
@property (nonatomic, copy) NSData *usoPersonQuery;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif