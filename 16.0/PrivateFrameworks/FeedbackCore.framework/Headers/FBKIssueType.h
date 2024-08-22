// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBKISSUETYPE_H
#define FBKISSUETYPE_H

@class NSString;


#import "FBKManagedFeedbackObject.h"

@interface FBKIssueType : FBKManagedFeedbackObject

@property (retain) NSString *displayName;


+(id)entityName;
-(void)setPropertiesFromJSONObject:(id)arg0 ;


@end


#endif