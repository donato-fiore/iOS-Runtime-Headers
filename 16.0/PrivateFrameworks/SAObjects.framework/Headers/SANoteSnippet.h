// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SANOTESNIPPET_H
#define SANOTESNIPPET_H

@class NSArray;


#import "SAUISnippet.h"

@interface SANoteSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *notes;


+(id)snippet;
+(id)snippetWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif