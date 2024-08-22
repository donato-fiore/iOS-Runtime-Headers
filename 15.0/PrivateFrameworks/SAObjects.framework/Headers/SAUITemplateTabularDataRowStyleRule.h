// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAUITEMPLATETABULARDATAROWSTYLERULE_H
#define SAUITEMPLATETABULARDATAROWSTYLERULE_H

@class NSString, NSNumber;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAUITemplateTabularDataRowStyleRule : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *minimumHeight;
@property (copy, nonatomic) NSNumber *rowCount;
@property (copy, nonatomic) NSNumber *rowStartIndex;
@property (copy, nonatomic) NSNumber *showTopBorder;
@property (readonly) Class superclass;


+(id)tabularDataRowStyleRule;
+(id)tabularDataRowStyleRuleWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif