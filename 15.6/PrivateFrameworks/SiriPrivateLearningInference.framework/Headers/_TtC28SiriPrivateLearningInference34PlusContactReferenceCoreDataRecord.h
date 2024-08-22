// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC28SIRIPRIVATELEARNINGINFERENCE34PLUSCONTACTREFERENCECOREDATARECORD_H
#define _TTC28SIRIPRIVATELEARNINGINFERENCE34PLUSCONTACTREFERENCECOREDATARECORD_H

@class NSManagedObject, NSString;


#import "_TtC28SiriPrivateLearningInference35PlusContactSuggestionCoreDataRecord.h"

@interface _TtC28SiriPrivateLearningInference34PlusContactReferenceCoreDataRecord : NSManagedObject

@property (nonatomic, copy) NSString *contactId;
@property (nonatomic, copy) NSString *contactLabel;
@property (nonatomic, retain) _TtC28SiriPrivateLearningInference35PlusContactSuggestionCoreDataRecord *contactSuggestion;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif