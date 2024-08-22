// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMCOLLECTIONSETTINGITEM_H
#define HMCOLLECTIONSETTINGITEM_H

@class NSUUID;
@protocol NSCopying, NSSecureCoding, NSObject><NSCopying><NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HMCollectionSettingItem : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy) NSUUID *identifier; // ivar: _identifier
@property (readonly, copy) NSObject<NSObject><NSCopying><NSSecureCoding> *value; // ivar: _value


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif