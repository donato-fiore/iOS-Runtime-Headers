// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBKISSUEDEFINITION_H
#define FBKISSUEDEFINITION_H

@class NSSet, NSNumber;


#import "FBKManagedFeedbackObject.h"

@interface FBKIssueDefinition : FBKManagedFeedbackObject

@property (retain) NSSet *fileMatchers;
@property (retain) NSNumber *issueAreaID;
@property (retain) NSNumber *issueTypeID;


+(id)entityName;
-(void)setPropertiesFromJSONObject:(id)arg0 ;


@end


#endif