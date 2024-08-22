// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EXECUTESUGGESTIONINTENT_H
#define EXECUTESUGGESTIONINTENT_H

@class INIntent;


#import "Suggestion.h"

@interface ExecuteSuggestionIntent : INIntent

@property (nonatomic, retain) Suggestion *suggestion;


-(id)init;
-(id)initWithCoder:(id)arg0 ;


@end


#endif