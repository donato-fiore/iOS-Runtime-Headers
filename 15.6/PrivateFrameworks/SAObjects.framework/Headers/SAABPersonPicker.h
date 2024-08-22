// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAABPERSONPICKER_H
#define SAABPERSONPICKER_H

@class NSArray;


#import "SAUIDomainObjectPicker.h"

@interface SAABPersonPicker : SAUIDomainObjectPicker

@property (copy, nonatomic) NSArray *persons;
@property (nonatomic) BOOL showImmediately;


+(id)personPicker;
+(id)personPickerWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif