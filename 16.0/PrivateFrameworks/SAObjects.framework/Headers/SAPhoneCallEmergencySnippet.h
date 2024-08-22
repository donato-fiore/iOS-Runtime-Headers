// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAPHONECALLEMERGENCYSNIPPET_H
#define SAPHONECALLEMERGENCYSNIPPET_H



#import "SAPhoneCallSnippet.h"
#import "SAUIColor.h"

@interface SAPhoneCallEmergencySnippet : SAPhoneCallSnippet

@property (retain, nonatomic) SAUIColor *bodyBackgroundColor;
@property (retain, nonatomic) SAUIColor *bodyTextColor;
@property (nonatomic) NSInteger countDownSeconds;
@property (retain, nonatomic) SAUIColor *headerBackgroundColor;
@property (retain, nonatomic) SAUIColor *headerTextColor;


+(id)callEmergencySnippet;
+(id)callEmergencySnippetWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif