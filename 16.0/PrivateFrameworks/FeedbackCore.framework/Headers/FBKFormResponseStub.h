// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBKFORMRESPONSESTUB_H
#define FBKFORMRESPONSESTUB_H

@class NSSet, NSNumber, NSArray, NSString, NSDate;


#import "FBKManagedFeedbackObject.h"
#import "FBKContentItem.h"
#import "FBKFeedback.h"

@interface FBKFormResponseStub : FBKManagedFeedbackObject

@property (retain, nonatomic) FBKContentItem *contentItem;
@property (readonly, nonatomic) FBKFeedback *feedback;
@property (retain, nonatomic) NSSet *filePromiseStubs;
@property (readonly) NSNumber *followupCount;
@property (copy, nonatomic) NSNumber *formID;
@property (readonly) BOOL isSubmitted;
@property (retain, nonatomic) NSArray *questionGroupStubs;
@property (copy, nonatomic) NSNumber *remoteID;
@property (copy, nonatomic) NSString *searchText;
@property (copy, nonatomic) NSDate *submittedAt;
@property (copy, nonatomic) NSDate *updatedAt;


+(id)entityName;
+(id)fetchRequest;
-(id)visibleFilePromises;
-(void)setPropertiesFromJSONObject:(id)arg0 ;


@end


#endif