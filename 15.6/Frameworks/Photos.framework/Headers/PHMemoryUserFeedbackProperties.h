// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHMEMORYUSERFEEDBACKPROPERTIES_H
#define PHMEMORYUSERFEEDBACKPROPERTIES_H



#import "PHMemoryPropertySet.h"
#import "PHUserFeedback.h"

@interface PHMemoryUserFeedbackProperties : PHMemoryPropertySet

@property (readonly, nonatomic) PHUserFeedback *userFeedback; // ivar: _userFeedback


+(BOOL)isToMany;
+(id)entityName;
+(id)keyPathFromPrimaryObject;
+(id)keyPathToPrimaryObject;
+(id)propertiesToFetch;
+(id)propertiesToSortBy;
+(id)propertySetName;
-(id)initWithFetchDictionary:(id)arg0 memory:(id)arg1 prefetched:(BOOL)arg2 ;


@end


#endif