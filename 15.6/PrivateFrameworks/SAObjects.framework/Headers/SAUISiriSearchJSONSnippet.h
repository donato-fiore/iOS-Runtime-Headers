// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAUISIRISEARCHJSONSNIPPET_H
#define SAUISIRISEARCHJSONSNIPPET_H

@class NSString;


#import "SAUISnippet.h"

@interface SAUISiriSearchJSONSnippet : SAUISnippet

@property (copy, nonatomic) NSString *clientTemplate;


+(id)siriSearchJSONSnippet;
+(id)siriSearchJSONSnippetWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif