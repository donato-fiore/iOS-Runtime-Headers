// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAUITEMPLATEATTRIBUTEDSTRING_H
#define SAUITEMPLATEATTRIBUTEDSTRING_H

@class NSArray, NSString;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAUITemplateAttributedString : AceObject <SAAceSerializable>



@property (copy, nonatomic) NSArray *attributeRuns;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text;


+(id)attributedString;
+(id)attributedStringWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif