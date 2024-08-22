// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASTSPECIFICANSWERITEM_H
#define SASTSPECIFICANSWERITEM_H

@class NSString;
@protocol SASTTemplateItem;


#import "AceObject.h"
#import "SAUIDecoratedText.h"

@interface SASTSpecificAnswerItem : AceObject <SASTTemplateItem>



@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) SAUIDecoratedText *decoratedFooter;
@property (retain, nonatomic) SAUIDecoratedText *decoratedValue;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *footer;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *value;


+(id)specificAnswerItem;
+(id)specificAnswerItemWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif