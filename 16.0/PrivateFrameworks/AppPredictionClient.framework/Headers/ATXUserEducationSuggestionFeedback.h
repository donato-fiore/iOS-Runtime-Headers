// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXUSEREDUCATIONSUGGESTIONFEEDBACK_H
#define ATXUSEREDUCATIONSUGGESTIONFEEDBACK_H

@protocol NSSecureCoding, ATXUserEducationSuggestion;

#import <Foundation/Foundation.h>


@interface ATXUserEducationSuggestionFeedback : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUInteger feedbackType; // ivar: _feedbackType
@property (readonly, nonatomic) NSObject<ATXUserEducationSuggestion> *userEducationSuggestion; // ivar: _userEducationSuggestion


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUserEducationSuggestion:(id)arg0 feedbackType:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif