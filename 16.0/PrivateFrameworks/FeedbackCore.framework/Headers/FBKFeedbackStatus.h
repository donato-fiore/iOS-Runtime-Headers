// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBKFEEDBACKSTATUS_H
#define FBKFEEDBACKSTATUS_H

@class NSAttributedString, NSArray, NSNumber, NSDictionary, NSDate;


#import "FBKManagedFeedbackObject.h"
#import "FBKFeedback.h"
#import "FBKQuestionGroupStub.h"

@interface FBKFeedbackStatus : FBKManagedFeedbackObject

@property (readonly, nonatomic) NSAttributedString *attributedStringRepresentation;
@property (retain, nonatomic) FBKFeedback *feedback;
@property (readonly, nonatomic) BOOL isEmpty;
@property (retain, nonatomic) NSArray *orderedKeys;
@property (readonly, nonatomic) FBKQuestionGroupStub *questionGroupStubRepresentation;
@property (copy, nonatomic) NSNumber *remoteID;
@property (retain, nonatomic) NSDictionary *statusPairs;
@property (copy, nonatomic) NSDate *updatedAt;


+(id)entityName;
+(id)fetchRequest;
-(void)setPropertiesFromJSONObject:(id)arg0 ;


@end


#endif