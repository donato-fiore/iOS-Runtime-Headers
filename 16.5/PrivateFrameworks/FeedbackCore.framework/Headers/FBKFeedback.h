// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBKFEEDBACK_H
#define FBKFEEDBACK_H

@class NSString, NSDate, NSArray, NSNumber, NSOrderedSet;


#import "FBKManagedFeedbackObject.h"
#import "FBKContentItem.h"
#import "FBKFormResponse.h"
#import "FBKFormResponseStub.h"
#import "FBKFeedbackStatus.h"

@interface FBKFeedback : FBKManagedFeedbackObject

@property (readonly, nonatomic) BOOL allowUnsolicitedFollowup;
@property (retain) NSString *build;
@property (retain) FBKContentItem *contentItem;
@property (retain) NSDate *createdAt;
@property (retain) NSArray *feedbackFollowupIDs;
@property (retain) NSArray *feedbackFollowups;
@property (retain) FBKFormResponse *formResponse;
@property (retain) NSNumber *formResponseID;
@property (readonly, nonatomic) FBKFormResponseStub *formResponseStub;
@property (retain) NSOrderedSet *primitiveFeedbackFollowups;
@property (retain) NSNumber *rawType;
@property (retain) FBKFeedbackStatus *status;
@property (readonly, nonatomic) NSUInteger type;
@property (retain) NSDate *updatedAt;


+(id)entityName;
-(BOOL)hasEqualMetadata:(id)arg0 ;
-(BOOL)hasVisibleFollowupContent;
-(id)validFeedbackFollowups;
-(void)addFollowup:(id)arg0 ;
-(void)deleteFollowup:(id)arg0 ;
-(void)setPropertiesFromJSONObject:(id)arg0 ;


@end


#endif