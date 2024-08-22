// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKMEDICATIONSTOKENIZER_H
#define HKMEDICATIONSTOKENIZER_H

@class NLTokenizer;

#import <Foundation/Foundation.h>


@interface HKMedicationsTokenizer : NSObject {
    os_unfair_lock_s _lock;
}


@property (retain, nonatomic) NLTokenizer *tokenizer; // ivar: _tokenizer


-(id)init;
-(id)wordsFromTranscript:(id)arg0 ;


@end


#endif