// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPARTWORKIMAGEATTACHMENTS_H
#define MPARTWORKIMAGEATTACHMENTS_H

@class UIColor;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MPArtworkImageAttachments : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) BOOL hasTitle; // ivar: _hasTitle
@property (readonly, nonatomic) UIColor *textColor; // ivar: _textColor


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTextColor:(id)arg0 hasTitle:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif