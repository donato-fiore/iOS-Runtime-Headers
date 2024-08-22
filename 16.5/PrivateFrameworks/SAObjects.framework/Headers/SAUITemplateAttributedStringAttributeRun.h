// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAUITEMPLATEATTRIBUTEDSTRINGATTRIBUTERUN_H
#define SAUITEMPLATEATTRIBUTEDSTRINGATTRIBUTERUN_H

@class NSDictionary, NSString;
@protocol SAAceSerializable;


#import "AceObject.h"
#import "SAUITemplateRange.h"

@interface SAUITemplateAttributedStringAttributeRun : AceObject <SAAceSerializable>



@property (copy, nonatomic) NSDictionary *attributes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SAUITemplateRange *range;
@property (readonly) Class superclass;


+(id)attributedStringAttributeRun;
+(id)attributedStringAttributeRunWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif