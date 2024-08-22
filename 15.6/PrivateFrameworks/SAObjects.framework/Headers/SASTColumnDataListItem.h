// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASTCOLUMNDATALISTITEM_H
#define SASTCOLUMNDATALISTITEM_H

@class NSString, NSArray;
@protocol SASTActionableTemplateItem, SASTTemplateAction;


#import "AceObject.h"
#import "SAUINanoImageResource.h"
#import "SAUIDecoratedText.h"

@interface SASTColumnDataListItem : AceObject <SASTActionableTemplateItem>



@property (retain, nonatomic) NSObject<SASTTemplateAction> *action;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *decoratedRows;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SAUINanoImageResource *imageResource;
@property (copy, nonatomic) NSString *rowLayout;
@property (readonly) Class superclass;
@property (retain, nonatomic) SAUIDecoratedText *title;


+(id)columnDataListItem;
+(id)columnDataListItemWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif