// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CVNLPCOMMSAFETYTEXTCLASSIFICATION_H
#define CVNLPCOMMSAFETYTEXTCLASSIFICATION_H

@class NSString, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CVNLPCommSafetyTextClassification : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *conversationIdentifier; // ivar: _conversationIdentifier
@property (readonly, copy, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) NSInteger result; // ivar: _result
@property (readonly, copy, nonatomic) NSDate *startDate; // ivar: _startDate


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConversationIdentifier:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 result:(NSInteger)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif