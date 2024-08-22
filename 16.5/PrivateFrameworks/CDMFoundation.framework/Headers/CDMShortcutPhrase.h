// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMSHORTCUTPHRASE_H
#define CDMSHORTCUTPHRASE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CDMShortcutPhrase : NSObject

@property (readonly, nonatomic) NSString *baseTemplateString; // ivar: _baseTemplateString
@property (readonly, nonatomic) NSString *semanticValue; // ivar: _semanticValue


-(id)initWithSemanticValue:(id)arg0 ;
-(id)initWithSemanticValue:(id)arg0 baseTemplateString:(id)arg1 ;


@end


#endif