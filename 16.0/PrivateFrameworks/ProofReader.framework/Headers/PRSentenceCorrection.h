// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRSENTENCECORRECTION_H
#define PRSENTENCECORRECTION_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface PRSentenceCorrection : NSObject {
    int _category;
    _NSRange _range;
    NSString *_word;
    NSArray *_corrections;
}




-(BOOL)presentAsAutocorrection;
-(BOOL)presentAsGrammarError;
-(BOOL)presentAsSpellingError;
-(id)corrections;
-(id)description;
-(id)initWithCategory:(int)arg0 range:(struct _NSRange )arg1 word:(id)arg2 corrections:(id)arg3 ;
-(id)word;
-(int)category;
-(struct _NSRange )range;
-(void)dealloc;


@end


#endif