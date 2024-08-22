// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASTTABLEROWITEM_H
#define SASTTABLEROWITEM_H

@class NSArray, NSString;
@protocol SASTTemplateItem;


#import "AceObject.h"
#import "SAUINanoImageResource.h"
#import "SAUIDecoratedText.h"

@interface SASTTableRowItem : AceObject <SASTTemplateItem>



@property (copy, nonatomic) NSArray *columnValues;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SAUINanoImageResource *imageResource;
@property (readonly) Class superclass;
@property (retain, nonatomic) SAUIDecoratedText *title;


+(id)tableRowItem;
+(id)tableRowItemWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif