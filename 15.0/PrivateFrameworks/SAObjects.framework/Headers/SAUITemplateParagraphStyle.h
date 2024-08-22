// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAUITEMPLATEPARAGRAPHSTYLE_H
#define SAUITEMPLATEPARAGRAPHSTYLE_H

@class NSString, NSNumber;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAUITemplateParagraphStyle : AceObject <SAAceSerializable>



@property (copy, nonatomic) NSString *alignment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSNumber *firstLineHeadIndent;
@property (copy, nonatomic) NSNumber *getParagraphSpacingBefore;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *headIndent;
@property (copy, nonatomic) NSNumber *lineHeightMultiple;
@property (copy, nonatomic) NSNumber *lineSpacing;
@property (copy, nonatomic) NSNumber *maximumLineHeight;
@property (copy, nonatomic) NSNumber *minimumLineHeight;
@property (copy, nonatomic) NSNumber *paragraphSpacing;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSNumber *tailIndent;


+(id)paragraphStyle;
+(id)paragraphStyleWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif