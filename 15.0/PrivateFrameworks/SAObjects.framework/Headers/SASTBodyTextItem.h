// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASTBODYTEXTITEM_H
#define SASTBODYTEXTITEM_H

@class NSString;
@protocol SASTTemplateItem;


#import "AceObject.h"
#import "SADecoratedString.h"

@interface SASTBodyTextItem : AceObject <SASTTemplateItem>



@property (copy, nonatomic) NSString *alignment;
@property (copy, nonatomic) NSString *bodyText;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) SADecoratedString *decoratedBodyText;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *position;
@property (readonly) Class superclass;


+(id)bodyTextItemWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif