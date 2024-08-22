// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBKFILEPREDICATECONDITION_H
#define FBKFILEPREDICATECONDITION_H

@class NSString;


#import "FBKManagedFeedbackObject.h"

@interface FBKFilePredicateCondition : FBKManagedFeedbackObject

@property (retain, nonatomic) NSString *questionTat;
@property (retain, nonatomic) NSString *questionValue;


+(id)entityName;
-(id)description;
-(void)setPropertiesFromJSONObject:(id)arg0 ;


@end


#endif