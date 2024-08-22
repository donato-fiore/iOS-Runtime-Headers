// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMDPGRAMMARDATA_H
#define CMDPGRAMMARDATA_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CMDPGrammarData : NSObject

@property (readonly) NSString *builtInLMIdentifier; // ivar: _builtInLMIdentifier
@property (readonly) NSString *commandIdentifier; // ivar: _commandIdentifier
@property (readonly) NSString *word; // ivar: _word


-(id)initWithGrammarDataWord:(id)arg0 lmIdentifer:(id)arg1 commandIdentifier:(id)arg2 ;


@end


#endif