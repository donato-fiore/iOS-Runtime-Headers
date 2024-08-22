// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CODISTANTACCESSORYSELECTIONSETTING_H
#define CODISTANTACCESSORYSELECTIONSETTING_H

@class NSArray;


#import "CODistantAccessorySetting.h"

@interface CODistantAccessorySelectionSetting : CODistantAccessorySetting

@property (readonly, copy, nonatomic) NSArray *items; // ivar: _items


+(BOOL)supportsSecureCoding;
-(id)initWithAccessorySetting:(id)arg0 accessory:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif