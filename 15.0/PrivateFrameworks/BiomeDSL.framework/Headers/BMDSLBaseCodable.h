// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMDSLBASECODABLE_H
#define BMDSLBASECODABLE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BMDSLBaseCodable : NSObject <NSSecureCoding>



@property (nonatomic, getter=isEvaluationBlocked) BOOL evaluationBlocked; // ivar: _evaluationBlocked
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) unsigned int version; // ivar: _version


+(BOOL)supportsSecureCoding;
-(BOOL)allowsEvaluation;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithName:(id)arg0 version:(unsigned int)arg1 ;
-(void)allowEvaluation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif