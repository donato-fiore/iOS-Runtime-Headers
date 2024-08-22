// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBKFILEMATCHER_H
#define FBKFILEMATCHER_H

@class NSString, NSSet, NSRegularExpression;


#import "FBKManagedFeedbackObject.h"

@interface FBKFileMatcher : FBKManagedFeedbackObject

@property (retain) NSString *deBundleIdentifier;
@property (retain) NSSet *feedbackFollowups;
@property (retain) NSSet *filePredicates;
@property (retain) NSString *instructionsAsHTML;
@property (retain, nonatomic) NSString *localizedDataCollectedExplanation;
@property (retain, nonatomic) NSString *localizedDataCollectedSummary;
@property (retain) NSString *name;
@property (retain) NSString *operationName;
@property (retain) NSString *platform;
@property (retain) NSRegularExpression *regularExpression; // ivar: _regularExpression
@property (retain) NSString *regularExpressionPattern;


+(id)entityName;
+(id)iconForFileName:(id)arg0 ;
-(BOOL)hasPlatform;
-(BOOL)matchesFilename:(id)arg0 ;
-(id)description;
-(id)iconForRequirement;
-(void)setPropertiesFromJSONObject:(id)arg0 ;


@end


#endif