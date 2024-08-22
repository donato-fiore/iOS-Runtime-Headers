// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKCONVERSATIONLISTACCESSORYVIEWCONFIGURATION_H
#define CKCONVERSATIONLISTACCESSORYVIEWCONFIGURATION_H

@class UIColor, UIBlurEffect, UIImage;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CKConversationListAccessoryViewConfiguration : NSObject <NSCopying>



@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) UIBlurEffect *blurEffect; // ivar: _blurEffect
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) UIColor *tintColor; // ivar: _tintColor
@property (nonatomic) NSInteger vibrancyStyle; // ivar: _vibrancyStyle


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif