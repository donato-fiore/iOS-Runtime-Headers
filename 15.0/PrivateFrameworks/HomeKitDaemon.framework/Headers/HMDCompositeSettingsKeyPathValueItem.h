// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCOMPOSITESETTINGSKEYPATHVALUEITEM_H
#define HMDCOMPOSITESETTINGSKEYPATHVALUEITEM_H

@class NSString;

#import <Foundation/Foundation.h>

#import "HMDCompositeSettingValue.h"

@interface HMDCompositeSettingsKeyPathValueItem : NSObject

@property (readonly, copy) NSString *keyPath; // ivar: _keyPath
@property (readonly, copy) HMDCompositeSettingValue *value; // ivar: _value


-(id)initWithKeyPath:(id)arg0 value:(id)arg1 ;


@end


#endif