// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASTCARDITEM_H
#define SASTCARDITEM_H

@class NSString;
@protocol SASTTemplateItem;


#import "AceObject.h"
#import "SAUIColor.h"
#import "SAUIDecoratedText.h"

@interface SASTCardItem : AceObject <SASTTemplateItem>



@property (retain, nonatomic) SAUIColor *backgroundColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SAUIDecoratedText *footnote;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SAUIDecoratedText *label;
@property (retain, nonatomic) SAUIColor *labelTextColor;
@property (readonly) Class superclass;
@property (retain, nonatomic) SAUIDecoratedText *title;
@property (retain, nonatomic) SAUIColor *titleBackgroundColor;
@property (retain, nonatomic) SAUIColor *titleTextColor;


+(id)cardItem;
+(id)cardItemWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif