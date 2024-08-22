// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAUIMENUITEM_H
#define SAUIMENUITEM_H

@class NSArray, NSURL, NSString;


#import "SAAceView.h"

@interface SAUIMenuItem : SAAceView

@property (copy, nonatomic) NSArray *commands;
@property (copy, nonatomic) NSURL *icon;
@property (copy, nonatomic) NSURL *ref;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *title;


+(id)menuItem;
+(id)menuItemWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif