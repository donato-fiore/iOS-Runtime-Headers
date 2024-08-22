// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAUIDOMAINOBJECTPICKERSELECTION_H
#define SAUIDOMAINOBJECTPICKERSELECTION_H



#import "SAStartRequest.h"
#import "SAUIDomainObjectPicker.h"
#import "SADomainObject.h"

@interface SAUIDomainObjectPickerSelection : SAStartRequest

@property (retain, nonatomic) SAUIDomainObjectPicker *domainObjectPicker;
@property (retain, nonatomic) SADomainObject *selectedItem;


+(id)domainObjectPickerSelectionWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif