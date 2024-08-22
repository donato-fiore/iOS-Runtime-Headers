// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAUIDOMAINOBJECTPICKER_H
#define SAUIDOMAINOBJECTPICKER_H

@class NSString;


#import "SAUISnippet.h"

@interface SAUIDomainObjectPicker : SAUISnippet

@property (copy, nonatomic) NSString *idNodeName;


+(id)domainObjectPicker;
+(id)domainObjectPickerWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif