// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASTLINEDETAILITEM_H
#define SASTLINEDETAILITEM_H

@class NSString;
@protocol SASTTemplateItem;


#import "AceObject.h"
#import "SAUIDecoratedText.h"

@interface SASTLineDetailItem : AceObject <SASTTemplateItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) SAUIDecoratedText *title;


+(id)lineDetailItem;
+(id)lineDetailItemWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif