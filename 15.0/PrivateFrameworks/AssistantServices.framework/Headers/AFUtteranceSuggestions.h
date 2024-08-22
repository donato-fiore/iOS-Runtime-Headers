// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFUTTERANCESUGGESTIONS_H
#define AFUTTERANCESUGGESTIONS_H

@class NSArray, NSString;
@protocol OS_dispatch_queue, AFUtteranceSuggestionsDelegate;

#import <Foundation/Foundation.h>


@interface AFUtteranceSuggestions : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_suggestedUtterances;
}


@property (readonly, weak, nonatomic) NSObject<AFUtteranceSuggestionsDelegate> *delegate; // ivar: _delegate
@property (readonly, copy, nonatomic) NSString *languageCode; // ivar: _languageCode


-(id)_suggestionsFilePath;
-(id)initWithLanguageCode:(id)arg0 delegate:(id)arg1 ;
-(void)getSuggestedUtterancesWithCompletion:(id)arg0 ;
-(void)setSuggestedUtterances:(id)arg0 ;


@end


#endif