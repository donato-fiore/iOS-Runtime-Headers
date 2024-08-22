// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAPHONECALLSNIPPET_H
#define SAPHONECALLSNIPPET_H

@class NSArray;


#import "SAUISnippet.h"

@interface SAPhoneCallSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *calls;


+(id)callSnippet;
+(id)callSnippetWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif