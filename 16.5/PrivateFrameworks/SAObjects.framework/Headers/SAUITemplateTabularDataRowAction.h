// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAUITEMPLATETABULARDATAROWACTION_H
#define SAUITEMPLATETABULARDATAROWACTION_H

@class NSString;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAUITemplateTabularDataRowAction : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)tabularDataRowAction;
+(id)tabularDataRowActionWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif