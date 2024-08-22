// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASTCOMMANDTEMPLATEACTION_H
#define SASTCOMMANDTEMPLATEACTION_H

@class NSArray, NSString;
@protocol SASTTemplateAction;


#import "AceObject.h"

@interface SASTCommandTemplateAction : AceObject <SASTTemplateAction>



@property (copy, nonatomic) NSArray *commands;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)commandTemplateAction;
+(id)commandTemplateActionWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif