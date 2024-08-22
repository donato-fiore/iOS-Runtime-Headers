// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef THINMEDIAGROUNDTRUTHCOREDATARECORD_H
#define THINMEDIAGROUNDTRUTHCOREDATARECORD_H

@class NSManagedObject, NSData, NSString, NSUUID;


#import "PlusMediaSuggestionCoreDataRecord.h"

@interface ThinMediaGroundTruthCoreDataRecord : NSManagedObject

@property (nonatomic, copy) NSData *groundTruthSource;
@property (nonatomic, copy) NSString *groundTruthType;
@property (nonatomic, copy) NSUUID *id;
@property (nonatomic, retain) PlusMediaSuggestionCoreDataRecord *plusMediaSuggestion;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif