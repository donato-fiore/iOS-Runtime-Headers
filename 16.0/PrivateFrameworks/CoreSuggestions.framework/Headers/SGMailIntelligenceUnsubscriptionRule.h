// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGMAILINTELLIGENCEUNSUBSCRIPTIONRULE_H
#define SGMAILINTELLIGENCEUNSUBSCRIPTIONRULE_H

@class NSNumber, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SGMailIntelligenceUnsubscriptionRule : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSNumber *mailCount; // ivar: _mailCount
@property (readonly, nonatomic) NSNumber *score; // ivar: _score
@property (readonly, nonatomic) NSInteger unsubscriptionRuleField; // ivar: _unsubscriptionRuleField
@property (readonly, nonatomic) NSString *value; // ivar: _value


+(BOOL)supportsSecureCoding;
+(id)prettyNameForUnsubscriptionRuleField:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUnsubscriptionRuleField:(NSInteger)arg0 tokenCounts:(id)arg1 ;
-(id)initWithUnsubscriptionRuleField:(NSInteger)arg0 value:(id)arg1 mailCount:(id)arg2 score:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif