// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSPLASHSCREENITEM_H
#define HKSPLASHSCREENITEM_H

@class NSString, UIImage;

#import <Foundation/Foundation.h>


@interface HKSplashScreenItem : NSObject

@property (retain, nonatomic) NSString *fullDescription; // ivar: _fullDescription
@property (retain, nonatomic) UIImage *icon; // ivar: _icon
@property (retain, nonatomic) NSString *title; // ivar: _title


+(id)splashScreenItemWithDictionary:(id)arg0 ;
+(id)splashScreenItemWithTitle:(id)arg0 icon:(id)arg1 fullDescription:(id)arg2 ;


@end


#endif