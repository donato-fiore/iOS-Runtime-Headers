// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICUITEXTSUGGESTION_H
#define ICUITEXTSUGGESTION_H

@class UITextSuggestion, NSString;



@interface ICUITextSuggestion : UITextSuggestion

@property (copy, nonatomic) NSString *shortName; // ivar: _shortName
@property (nonatomic) NSUInteger textSuggestionType; // ivar: _textSuggestionType
@property (copy, nonatomic) NSString *uuidString; // ivar: _uuidString


-(id)initWithShortName:(id)arg0 uuidString:(id)arg1 displayText:(id)arg2 image:(id)arg3 textSuggestionType:(NSUInteger)arg4 ;


@end


#endif