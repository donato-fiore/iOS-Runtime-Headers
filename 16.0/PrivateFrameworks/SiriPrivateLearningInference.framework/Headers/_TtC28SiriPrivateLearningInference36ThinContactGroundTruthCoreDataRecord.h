// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC28SIRIPRIVATELEARNINGINFERENCE36THINCONTACTGROUNDTRUTHCOREDATARECORD_H
#define _TTC28SIRIPRIVATELEARNINGINFERENCE36THINCONTACTGROUNDTRUTHCOREDATARECORD_H

@class NSManagedObject, NSData, NSString, NSUUID;


#import "_TtC28SiriPrivateLearningInference35PlusContactSuggestionCoreDataRecord.h"

@interface _TtC28SiriPrivateLearningInference36ThinContactGroundTruthCoreDataRecord : NSManagedObject

@property (nonatomic, copy) NSData *groundTruthSource;
@property (nonatomic, copy) NSString *groundTruthType;
@property (nonatomic, copy) NSUUID *id;
@property (nonatomic, retain) _TtC28SiriPrivateLearningInference35PlusContactSuggestionCoreDataRecord *plusContactSuggestion;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif