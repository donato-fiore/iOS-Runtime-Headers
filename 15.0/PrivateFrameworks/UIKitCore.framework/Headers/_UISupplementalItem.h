// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISUPPLEMENTALITEM_H
#define _UISUPPLEMENTALITEM_H

@class NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "UIImage.h"

@interface _UISupplementalItem : NSObject <NSCopying, NSSecureCoding>

 {
    id *_internal;
}


@property (copy, nonatomic) UIImage *icon; // ivar: _icon
@property (copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


+(BOOL)supportsSecureCoding;
-(id)_init;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif