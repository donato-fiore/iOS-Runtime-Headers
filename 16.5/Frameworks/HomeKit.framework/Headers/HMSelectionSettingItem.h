// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMSELECTIONSETTINGITEM_H
#define HMSELECTIONSETTINGITEM_H

@class NSUUID, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HMSelectionSettingItem : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy) NSUUID *identifier; // ivar: _identifier
@property (readonly, copy) NSString *localizedTitle; // ivar: _localizedTitle
@property (readonly, copy) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif