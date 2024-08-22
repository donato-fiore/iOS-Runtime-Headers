// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASTBUTTONITEM_H
#define SASTBUTTONITEM_H

@class NSString;
@protocol SASTActionableTemplateItem, SASTTemplateAction;


#import "AceObject.h"
#import "SAUIDecoratedText.h"
#import "SAUILocalImageResource.h"

@interface SASTButtonItem : AceObject <SASTActionableTemplateItem>



@property (retain, nonatomic) NSObject<SASTTemplateAction> *action;
@property (nonatomic) BOOL centered;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) SAUIDecoratedText *decoratedLabel;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SAUILocalImageResource *localImageResource;
@property (copy, nonatomic) NSString *position;
@property (readonly) Class superclass;


+(id)buttonItem;
+(id)buttonItemWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif