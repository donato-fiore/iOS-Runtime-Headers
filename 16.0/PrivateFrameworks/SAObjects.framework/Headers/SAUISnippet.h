// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAUISNIPPET_H
#define SAUISNIPPET_H

@class NSString;


#import "SAAceView.h"
#import "SAUIConfirmationOptions.h"
#import "SAUISash.h"

@interface SAUISnippet : SAAceView

@property (nonatomic) NSInteger category;
@property (retain, nonatomic) SAUIConfirmationOptions *confirmationOptions;
@property (retain, nonatomic) SAUISash *sash;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *summaryTitle;
@property (copy, nonatomic) NSString *title;


+(id)snippet;
+(id)snippetWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif