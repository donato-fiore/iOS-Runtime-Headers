// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGPOSTAGGER_H
#define SGPOSTAGGER_H


#import <Foundation/Foundation.h>


@interface SGPOSTagger : NSObject



+(id)sharedInstance;
-(id)tokenizeTextContent:(id)arg0 languageHint:(id)arg1 ;
-(id)tokenizeTextContent:(id)arg0 languageHint:(id)arg1 gazetteer:(id)arg2 ;


@end


#endif