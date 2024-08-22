// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFSUGGESTIONENGAGEMENTFEEDBACK_H
#define SFSUGGESTIONENGAGEMENTFEEDBACK_H



#import "SFFeedback.h"
#import "SFSearchSuggestion.h"

@interface SFSuggestionEngagementFeedback : SFFeedback

@property (retain, nonatomic) SFSearchSuggestion *suggestion; // ivar: _suggestion


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSuggestion:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif