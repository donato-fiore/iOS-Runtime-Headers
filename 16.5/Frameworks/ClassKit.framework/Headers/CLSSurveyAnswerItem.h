// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSSURVEYANSWERITEM_H
#define CLSSURVEYANSWERITEM_H

@class NSString, NSArray;
@protocol CLSRelationable, CLSMutableAssetAdopter;


#import "CLSObject.h"

@interface CLSSurveyAnswerItem : CLSObject <CLSRelationable, CLSMutableAssetAdopter>

 {
    NSString *_surveyID;
    NSString *_responderPersonID;
    NSInteger _answerType;
    NSString *_questionID;
    NSString *_textResponse;
    NSInteger _selectedIndex;
    CGFloat _continuousSliderValue;
    NSInteger _state;
    NSInteger _action;
}


@property (nonatomic) NSInteger action;
@property (nonatomic) NSInteger answerType;
@property (readonly, nonatomic) NSArray *assets; // ivar: assets
@property (nonatomic) CGFloat continuousSliderValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *questionID;
@property (copy, nonatomic) NSString *responderPersonID;
@property (nonatomic) NSInteger selectedIndex;
@property (nonatomic) NSInteger state;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *surveyID;
@property (copy, nonatomic) NSString *textResponse;


+(BOOL)supportsSecureCoding;
+(id)identifierForSurveyID:(id)arg0 questionID:(id)arg1 responderID:(id)arg2 ;
+(id)relations;
-(BOOL)validateObject:(*id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSurveyID:(id)arg0 questionID:(id)arg1 responderID:(id)arg2 ;
-(void)_answerUpdated;
-(void)addAsset:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeWithObject:(id)arg0 ;
-(void)removeAsset:(id)arg0 ;


@end


#endif