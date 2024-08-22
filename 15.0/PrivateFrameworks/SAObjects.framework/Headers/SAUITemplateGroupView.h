// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAUITEMPLATEGROUPVIEW_H
#define SAUITEMPLATEGROUPVIEW_H

@class NSString;


#import "SAUITemplateBaseItemGroup.h"

@interface SAUITemplateGroupView : SAUITemplateBaseItemGroup

@property (copy, nonatomic) NSString *alignment;
@property (copy, nonatomic) NSString *layoutStyle;


+(id)groupView;
+(id)groupViewWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif