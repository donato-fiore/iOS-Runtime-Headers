// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSSURVEY_H
#define CLSSURVEY_H

@class NSString, NSDate, NSArray;
@protocol CLSRelationable;


#import "CLSObject.h"

@interface CLSSurvey : CLSObject <CLSRelationable>

 {
    NSInteger _type;
    NSString *_title;
    NSString *_authorID;
    NSString *_serverETag;
    NSDate *_teacherLastModifiedDate;
    NSDate *_studentFirstSubmissionDate;
    NSInteger _surveyUpdateStatus;
}


@property (readonly, copy, nonatomic) NSString *authorID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *surveySteps;
@property (readonly, nonatomic) NSInteger surveyUpdateStatus;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) NSInteger type;


+(BOOL)supportsSecureCoding;
+(id)relations;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)questionArraysEqual:(id)arg0 ;
-(BOOL)validateObject:(*id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 authorID:(id)arg1 ;
-(id)serverETag;
-(id)studentFirstSubmissionDate;
-(id)teacherLastModifiedDate;
-(void)addSurveyStep:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeWithObject:(id)arg0 ;
-(void)removeSurveyStep:(id)arg0 ;
-(void)setServerETag:(id)arg0 ;
-(void)setStudentFirstSubmissionDate:(id)arg0 ;
-(void)setTeacherLastModifiedDate:(id)arg0 ;


@end


#endif