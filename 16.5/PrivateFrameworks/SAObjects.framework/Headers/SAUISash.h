// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAUISASH_H
#define SAUISASH_H

@class NSString, NSArray;
@protocol SAAceSerializable;


#import "AceObject.h"
#import "SAUIColor.h"
#import "SAUIImageResource.h"

@interface SAUISash : AceObject <SAAceSerializable>



@property (copy, nonatomic) NSString *applicationBundleIdentifier;
@property (retain, nonatomic) SAUIColor *backgroundColor;
@property (copy, nonatomic) NSArray *commands;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SAUIImageResource *image;
@property (readonly) Class superclass;
@property (retain, nonatomic) SAUIColor *textColor;
@property (copy, nonatomic) NSString *title;


+(id)sash;
+(id)sashWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif