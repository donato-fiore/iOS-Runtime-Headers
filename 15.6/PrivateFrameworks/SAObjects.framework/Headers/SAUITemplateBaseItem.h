// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAUITEMPLATEBASEITEM_H
#define SAUITEMPLATEBASEITEM_H

@class NSArray, NSString;
@protocol SAUITemplateItem;


#import "SABaseAceObject.h"
#import "SAUITemplateEdgeInsets.h"

@interface SAUITemplateBaseItem : SABaseAceObject <SAUITemplateItem>



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


+(id)baseItem;
+(id)baseItemWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif