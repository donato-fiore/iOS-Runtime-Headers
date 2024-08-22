// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXUSEREDUCATIONSUGGESTIONEVENT_H
#define ATXUSEREDUCATIONSUGGESTIONEVENT_H

@protocol NSSecureCoding, ATXUserEducationSuggestion;

#import <Foundation/Foundation.h>


@interface ATXUserEducationSuggestionEvent : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSObject<ATXUserEducationSuggestion> *userEducationSuggestion; // ivar: _userEducationSuggestion
@property (readonly, nonatomic) NSUInteger userEducationSuggestionEventType; // ivar: _userEducationSuggestionEventType


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUserEducationSuggestion:(id)arg0 userEducationSuggestionEventType:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif