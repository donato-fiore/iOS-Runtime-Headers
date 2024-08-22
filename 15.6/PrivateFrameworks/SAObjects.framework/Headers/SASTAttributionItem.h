// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASTATTRIBUTIONITEM_H
#define SASTATTRIBUTIONITEM_H

@class NSString;
@protocol SASTActionableTemplateItem, SASTTemplateAction;


#import "AceObject.h"
#import "SAUINanoImageResource.h"

@interface SASTAttributionItem : AceObject <SASTActionableTemplateItem>



@property (retain, nonatomic) NSObject<SASTTemplateAction> *action;
@property (copy, nonatomic) NSString *attributionPosition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SAUINanoImageResource *imageResource;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text;


+(id)attributionItem;
+(id)attributionItemWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif