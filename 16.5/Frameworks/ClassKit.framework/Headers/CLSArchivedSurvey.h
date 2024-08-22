// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSARCHIVEDSURVEY_H
#define CLSARCHIVEDSURVEY_H

@class NSString, NSArray;
@protocol CLSRelationable;


#import "CLSObject.h"

@interface CLSArchivedSurvey : CLSObject <CLSRelationable>

 {
    NSInteger _type;
    NSString *_title;
    NSString *_authorID;
}


@property (readonly, nonatomic) NSArray *archivedSurveySteps;
@property (readonly, copy, nonatomic) NSString *authorID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) NSInteger type;


+(BOOL)supportsSecureCoding;
+(id)relations;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 authorID:(id)arg1 ;
-(void)addArchivedSurveyStep:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif