// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASTHEADERITEM_H
#define SASTHEADERITEM_H

@class NSString;
@protocol SASTTemplateItem;


#import "AceObject.h"
#import "SAUIDecoratedText.h"

@interface SASTHeaderItem : AceObject <SASTTemplateItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SAUIDecoratedText *header;
@property (retain, nonatomic) SAUIDecoratedText *subtitle;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text;


+(id)headerItemWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif