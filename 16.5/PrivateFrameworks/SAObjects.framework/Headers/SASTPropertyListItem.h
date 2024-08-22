// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASTPROPERTYLISTITEM_H
#define SASTPROPERTYLISTITEM_H

@class NSString, NSArray;
@protocol SASTTemplateItem;


#import "AceObject.h"
#import "SAUIDecoratedText.h"
#import "SAUINanoImageResource.h"

@interface SASTPropertyListItem : AceObject <SASTTemplateItem>



@property (copy, nonatomic) NSString *alignment;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) SAUIDecoratedText *decoratedTitle;
@property (copy, nonatomic) NSArray *decoratedValues;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SAUINanoImageResource *imageResource;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *values;


+(id)propertyListItem;
+(id)propertyListItemWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif