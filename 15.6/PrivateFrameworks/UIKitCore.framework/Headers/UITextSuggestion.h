// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UITEXTSUGGESTION_H
#define UITEXTSUGGESTION_H

@class TIKeyboardCandidate, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "UIImage.h"

@interface UITextSuggestion : NSObject <NSCopying>



@property (readonly, nonatomic) TIKeyboardCandidate *_keyboardCandidate;
@property (nonatomic) BOOL displayStylePlain; // ivar: _displayStylePlain
@property (copy, nonatomic) NSString *displayText; // ivar: _displayText
@property (copy, nonatomic) NSString *headerText; // ivar: _headerText
@property (copy, nonatomic) UIImage *image; // ivar: _image
@property (readonly, copy, nonatomic) NSString *inputText; // ivar: _inputText
@property (copy, nonatomic) NSString *searchText; // ivar: _searchText


+(id)textSuggestionWithInputText:(id)arg0 ;
+(id)textSuggestionWithInputText:(id)arg0 searchText:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithInputText:(id)arg0 searchText:(id)arg1 displayText:(id)arg2 headerText:(id)arg3 ;


@end


#endif