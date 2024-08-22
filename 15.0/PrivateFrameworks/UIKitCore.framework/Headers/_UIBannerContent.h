// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIBANNERCONTENT_H
#define _UIBANNERCONTENT_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "UIColor.h"
#import "UIImage.h"

@interface _UIBannerContent : NSObject <NSSecureCoding>



@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) NSString *body; // ivar: _body
@property (retain, nonatomic) UIColor *contentColor; // ivar: _contentColor
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) NSString *imageName; // ivar: _imageName
@property (retain, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
+(id)bannerContentWithTitle:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif