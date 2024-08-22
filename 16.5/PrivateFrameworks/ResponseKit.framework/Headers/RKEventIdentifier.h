// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RKEVENTIDENTIFIER_H
#define RKEVENTIDENTIFIER_H


#import <Foundation/Foundation.h>

#import "RKMontrealModel.h"
#import "RKNLEventTokenizer.h"

@interface RKEventIdentifier : NSObject {
    RKMontrealModel *_model;
    RKNLEventTokenizer *_tokenizer;
    *void _ioMappings;
    int _outputPermutation;
}




-(id)_identifyOwnedTokenSequences:(id)arg0 ;
-(id)_identifyStrings:(id)arg0 otherDateCount:(NSUInteger)arg1 otherDates:(struct RKEventIdentifierRange *)arg2 ;
-(id)identifyMessage:(id)arg0 ;
-(id)identifyStrings:(id)arg0 ;
-(id)identifyText:(id)arg0 ;
-(id)init;
-(id)initWithLanguageID:(id)arg0 ;
-(void)resetEventIdentifierModel;


@end


#endif