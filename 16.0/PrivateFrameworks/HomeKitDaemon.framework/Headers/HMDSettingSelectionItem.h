// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDSETTINGSELECTIONITEM_H
#define HMDSETTINGSELECTIONITEM_H

@class NSUUID, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HMDSettingSelectionItem : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy) NSUUID *identifier; // ivar: _identifier
@property (readonly, copy) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif