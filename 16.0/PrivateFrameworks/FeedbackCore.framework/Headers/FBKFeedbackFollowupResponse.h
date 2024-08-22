// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBKFEEDBACKFOLLOWUPRESPONSE_H
#define FBKFEEDBACKFOLLOWUPRESPONSE_H

@class NSDate, NSNumber, NSString;


#import "FBKManagedFeedbackObject.h"
#import "FBKFeedbackFollowup.h"

@interface FBKFeedbackFollowupResponse : FBKManagedFeedbackObject

@property (retain) NSDate *createdAt;
@property (retain) FBKFeedbackFollowup *followup;
@property (retain, nonatomic) NSNumber *primitiveType;
@property (retain) NSString *role;
@property (retain) NSString *text;
@property NSUInteger type;


+(NSInteger)sortValueOfFollowupResponseRole:(id)arg0 ;
+(NSUInteger)followupResponseTypeFromString:(id)arg0 ;
+(id)entityName;
-(BOOL)isValidated;
-(BOOL)isValidationResponse;
-(void)setPropertiesFromJSONObject:(id)arg0 ;


@end


#endif