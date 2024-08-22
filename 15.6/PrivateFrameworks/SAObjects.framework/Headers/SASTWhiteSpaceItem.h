// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASTWHITESPACEITEM_H
#define SASTWHITESPACEITEM_H

@class NSString;
@protocol SASTTemplateItem;


#import "AceObject.h"

@interface SASTWhiteSpaceItem : AceObject <SASTTemplateItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)whiteSpaceItem;
+(id)whiteSpaceItemWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif