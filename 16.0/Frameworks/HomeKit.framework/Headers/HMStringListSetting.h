// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMSTRINGLISTSETTING_H
#define HMSTRINGLISTSETTING_H

@class NSArray;


#import "HMImmutableSetting.h"

@interface HMStringListSetting : HMImmutableSetting

@property (readonly, copy) NSArray *stringListValue; // ivar: _stringListValue


-(BOOL)isEqual:(id)arg0 ;
-(id)attributeDescriptions;
-(id)initWithKeyPath:(id)arg0 readOnly:(BOOL)arg1 payload:(id)arg2 ;
-(id)initWithKeyPath:(id)arg0 readOnly:(BOOL)arg1 stringListValue:(id)arg2 ;
-(id)payloadCopy;


@end


#endif