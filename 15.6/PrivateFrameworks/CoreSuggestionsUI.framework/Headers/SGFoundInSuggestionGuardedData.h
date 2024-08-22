// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGFOUNDINSUGGESTIONGUARDEDDATA_H
#define SGFOUNDINSUGGESTIONGUARDEDDATA_H

@protocol SGSuggestionsServiceMailProtocol, SGSuggestionsServiceMessagesProtocol;

#import <Foundation/Foundation.h>


@interface SGFoundInSuggestionGuardedData : NSObject {
    NSObject<SGSuggestionsServiceMailProtocol> *_mailService;
    NSObject<SGSuggestionsServiceMessagesProtocol> *_messageService;
}






@end


#endif