// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASTSTOCKCOMPARISONITEM_H
#define SASTSTOCKCOMPARISONITEM_H

@class NSString;
@protocol SASTTemplateItem;


#import "AceObject.h"
#import "SAUIDecoratedText.h"

@interface SASTStockComparisonItem : AceObject <SASTTemplateItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *stockValueFacet;
@property (retain, nonatomic) SAUIDecoratedText *subtitle;
@property (readonly) Class superclass;
@property (retain, nonatomic) SAUIDecoratedText *title;
@property (retain, nonatomic) SAUIDecoratedText *value;


+(id)stockComparisonItem;
+(id)stockComparisonItemWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif