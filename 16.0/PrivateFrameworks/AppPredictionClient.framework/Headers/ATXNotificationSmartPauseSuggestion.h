// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXNOTIFICATIONSMARTPAUSESUGGESTION_H
#define ATXNOTIFICATIONSMARTPAUSESUGGESTION_H

@class NSDate;
@protocol NSSecureCoding, ATXProtoBufWrapper, NSCopying;

#import <Foundation/Foundation.h>


@interface ATXNotificationSmartPauseSuggestion : NSObject <NSSecureCoding, ATXProtoBufWrapper, NSCopying>



@property (nonatomic) CGFloat suggestionDuration; // ivar: _suggestionDuration
@property (readonly, copy, nonatomic) NSDate *suggestionExpiration; // ivar: _suggestionExpiration


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXNotificationSmartPauseSuggestion:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)encodeAsProto;
-(id)feedbackKeyComponent;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithSuggestionExpiration:(id)arg0 pauseDuration:(CGFloat)arg1 ;
-(id)proto;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif