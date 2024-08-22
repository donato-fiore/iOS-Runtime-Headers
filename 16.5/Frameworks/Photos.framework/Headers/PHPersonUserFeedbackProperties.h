// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHPERSONUSERFEEDBACKPROPERTIES_H
#define PHPERSONUSERFEEDBACKPROPERTIES_H



#import "PHPersonPropertySet.h"
#import "PHUserFeedback.h"

@interface PHPersonUserFeedbackProperties : PHPersonPropertySet

@property (readonly, nonatomic) PHUserFeedback *userFeedback; // ivar: _userFeedback


+(BOOL)isToMany;
+(id)entityName;
+(id)keyPathFromPrimaryObject;
+(id)keyPathToPrimaryObject;
+(id)propertiesToFetch;
+(id)propertiesToSortBy;
+(id)propertySetName;
-(id)initWithFetchDictionary:(id)arg0 person:(id)arg1 prefetched:(BOOL)arg2 ;


@end


#endif