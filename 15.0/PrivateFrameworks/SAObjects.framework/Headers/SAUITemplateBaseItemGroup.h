// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAUITEMPLATEBASEITEMGROUP_H
#define SAUITEMPLATEBASEITEMGROUP_H

@class NSArray, NSString;
@protocol SAUITemplateItemGroup;


#import "SAUITemplateBaseItem.h"
#import "SAUITemplateEdgeInsets.h"

@interface SAUITemplateBaseItemGroup : SAUITemplateBaseItem <SAUITemplateItemGroup>



@property (copy, nonatomic) NSArray *communicationOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SAUITemplateEdgeInsets *fullScreenPaddingDelta;
@property (nonatomic) BOOL hasPriorityLayout;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SAUITemplateEdgeInsets *padding;
@property (copy, nonatomic) NSArray *presentationOptions;
@property (nonatomic) BOOL shouldBeOffscreenInPartial;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *templateItems;


+(id)baseItemGroup;
+(id)baseItemGroupWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif