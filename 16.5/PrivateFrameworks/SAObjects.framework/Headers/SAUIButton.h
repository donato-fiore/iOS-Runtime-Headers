// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAUIBUTTON_H
#define SAUIBUTTON_H

@class NSArray, NSString;


#import "SAAceView.h"
#import "SAUIColor.h"
#import "SAUIImageResource.h"

@interface SAUIButton : SAAceView

@property (retain, nonatomic) SAUIColor *backgroundColor;
@property (copy, nonatomic) NSArray *commands;
@property (retain, nonatomic) SAUIImageResource *image;
@property (copy, nonatomic) NSString *secondaryText;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) SAUIColor *textColor;


+(id)button;
+(id)buttonWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif