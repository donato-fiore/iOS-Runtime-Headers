// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASTVIEWTEMPLATEACTION_H
#define SASTVIEWTEMPLATEACTION_H

@class NSArray, NSString;
@protocol SASTTemplateAction;


#import "AceObject.h"
#import "SASTItemGroup.h"

@interface SASTViewTemplateAction : AceObject <SASTTemplateAction>



@property (copy, nonatomic) NSArray *commands;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SASTItemGroup *itemGroupView;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *viewTitle;


+(id)viewTemplateAction;
+(id)viewTemplateActionWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif