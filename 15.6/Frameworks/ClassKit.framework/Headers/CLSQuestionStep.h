// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLSQUESTIONSTEP_H
#define CLSQUESTIONSTEP_H

@class NSString, NSArray;
@protocol CLSRelationable, CLSMutableAssetAdopter;


#import "CLSSurveyStep.h"
#import "CLSAnswerFormat.h"

@interface CLSQuestionStep : CLSSurveyStep <CLSRelationable, CLSMutableAssetAdopter>

 {
    NSString *_questionText;
    NSInteger _displayOrder;
    NSInteger _questionType;
}


@property (retain, nonatomic) CLSAnswerFormat *answerFormat;
@property (readonly, nonatomic) NSArray *assets; // ivar: assets
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger displayOrder;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *questionText;
@property (nonatomic) NSInteger questionType;
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)relations;
-(BOOL)assetsEqual:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithQuestionText:(id)arg0 answerFormat:(id)arg1 ;
-(void)addAsset:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeWithObject:(id)arg0 ;
-(void)removeAsset:(id)arg0 ;


@end


#endif