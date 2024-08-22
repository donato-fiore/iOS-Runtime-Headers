// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HRONBOARDINGBULLETPOINT_H
#define HRONBOARDINGBULLETPOINT_H

@class NSString, UIImage;

#import <Foundation/Foundation.h>


@interface HROnboardingBulletPoint : NSObject

@property (readonly, nonatomic) NSString *bulletBodyString; // ivar: _bulletBodyString
@property (readonly, nonatomic) UIImage *bulletImage; // ivar: _bulletImage
@property (readonly, nonatomic) NSString *bulletTitleString; // ivar: _bulletTitleString


+(id)bulletPointWithImage:(id)arg0 title:(id)arg1 body:(id)arg2 ;
-(id)initWithImage:(id)arg0 title:(id)arg1 body:(id)arg2 ;


@end


#endif