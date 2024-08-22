// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFDIALOGATTRIBUTION_H
#define WFDIALOGATTRIBUTION_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "WFIcon.h"

@interface WFDialogAttribution : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) WFIcon *icon; // ivar: _icon
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
+(id)attributionWithAppBundleIdentifier:(id)arg0 ;
+(id)attributionWithTitle:(id)arg0 icon:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 icon:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif