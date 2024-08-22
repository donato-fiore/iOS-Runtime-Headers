// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SACARDSNIPPET_H
#define SACARDSNIPPET_H

@class NSData, NSArray;


#import "SAUISnippet.h"

@interface SACardSnippet : SAUISnippet

@property (copy, nonatomic) NSData *cardData;
@property (copy, nonatomic) NSData *compactSizeCardData;
@property (copy, nonatomic) NSArray *contextItems;
@property (copy, nonatomic) NSArray *referencedCommands;
@property (copy, nonatomic) NSArray *referencedSnippets;


+(id)snippet;
+(id)snippetWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif