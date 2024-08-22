// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBKFILEPREDICATE_H
#define FBKFILEPREDICATE_H

@class NSSet;


#import "FBKManagedFeedbackObject.h"

@interface FBKFilePredicate : FBKManagedFeedbackObject

@property (nonatomic) BOOL alwaysRequired;
@property (retain, nonatomic) NSSet *bugForms;
@property (retain, nonatomic) NSSet *conditions;
@property (nonatomic) NSInteger enhancedLoggingDuration;
@property (nonatomic) NSInteger enhancedLoggingRetryCount;
@property (retain, nonatomic) NSSet *matchers;
@property (nonatomic) BOOL requiresRemote;
@property (nonatomic) BOOL showsConsentText;


+(id)entityName;
-(BOOL)satisfiedBy:(id)arg0 ;
-(void)setPropertiesFromJSONObject:(id)arg0 ;


@end


#endif