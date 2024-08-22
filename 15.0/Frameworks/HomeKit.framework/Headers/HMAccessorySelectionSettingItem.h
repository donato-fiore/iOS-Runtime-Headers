// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMACCESSORYSELECTIONSETTINGITEM_H
#define HMACCESSORYSELECTIONSETTINGITEM_H

@class NSUUID, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HMAccessorySelectionSetting.h"

@interface HMAccessorySelectionSettingItem : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy) NSUUID *identifier; // ivar: _identifier
@property (readonly, copy) NSString *keyPath;
@property (readonly, copy) NSString *localizedTitle;
@property (weak) HMAccessorySelectionSetting *setting; // ivar: _setting
@property (readonly, copy) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif