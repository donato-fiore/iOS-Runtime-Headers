// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVVCDUCKFADEDURATION_H
#define AVVCDUCKFADEDURATION_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface AVVCDuckFadeDuration : NSObject

@property (retain, nonatomic) NSNumber *fadeIn; // ivar: _fadeIn
@property (retain, nonatomic) NSNumber *fadeOut; // ivar: _fadeOut


-(id)description;
-(id)initWithFadeIn:(id)arg0 fadeOut:(id)arg1 ;


@end


#endif