// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ACHBACKCOMPATMONTHLYCHALLENGEDEFINITION_H
#define ACHBACKCOMPATMONTHLYCHALLENGEDEFINITION_H

@class NSExpression, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ACHBackCompatMonthlyChallengeDefinition : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSExpression *goalExpression; // ivar: _goalExpression
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *typeString; // ivar: _typeString


+(BOOL)supportsSecureCoding;
+(id)definitionFromData:(id)arg0 ;
-(NSUInteger)_monthlyChallengeTypeFromTypeString;
-(id)_dateComponentsFromIdentifier;
-(id)initWithCoder:(id)arg0 ;
-(id)template;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif