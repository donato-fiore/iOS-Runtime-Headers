// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _EARTEXTNORMALIZATION_H
#define _EARTEXTNORMALIZATION_H


#import <Foundation/Foundation.h>

#import "_EARTokenizer.h"

@interface _EARTextNormalization : NSObject {
    _EARTokenizer *_tokenizer;
    unique_ptr<quasar::Munger, std::default_delete<quasar::Munger>> _munger;
}




-(id)init;
-(id)initWithMungeRules:(id)arg0 ;
-(id)initWithNcsRoot:(id)arg0 ;
-(id)initWithNcsRoot:(id)arg0 mungeRuleFile:(id)arg1 ;
-(id)initWithNcsRoot:(id)arg0 mungeRules:(id)arg1 ;
-(id)munge:(id)arg0 ;
-(id)normalize:(id)arg0 ;
-(id)tokenize:(id)arg0 ;


@end


#endif