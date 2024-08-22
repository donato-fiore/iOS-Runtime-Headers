// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLRBMLTSCHEDULINGPOLICY_H
#define MLRBMLTSCHEDULINGPOLICY_H

@class NSString, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MLRBMLTSchedulingPolicy : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *attachmentsFactorName; // ivar: _attachmentsFactorName
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation; // ivar: _dictionaryRepresentation
@property (readonly, copy, nonatomic) NSDictionary *dodMLPredicate; // ivar: _dodMLPredicate
@property (readonly, nonatomic) BOOL dodMLRequireDESRecordStore; // ivar: _dodMLRequireDESRecordStore
@property (readonly, nonatomic) NSUInteger maxEvaluation; // ivar: _maxEvaluation
@property (readonly, nonatomic) CGFloat maxRunTimeInSeconds; // ivar: _maxRunTimeInSeconds
@property (readonly, nonatomic) CGFloat pluginMinGapInSeconds; // ivar: _pluginMinGapInSeconds
@property (readonly, copy, nonatomic) NSString *recipeFactorName; // ivar: _recipeFactorName
@property (readonly, copy, nonatomic) NSString *recipeID; // ivar: _recipeID
@property (readonly, nonatomic) NSUInteger taskCount; // ivar: _taskCount
@property (readonly, nonatomic) CGFloat taskMinGapInSeconds; // ivar: _taskMinGapInSeconds
@property (readonly, nonatomic) NSUInteger taskType; // ivar: _taskType
@property (readonly, nonatomic) NSUInteger upload; // ivar: _upload


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithTRIPBStruct:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif