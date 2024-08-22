// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVVCDUCKSETTINGS_H
#define AVVCDUCKSETTINGS_H


#import <Foundation/Foundation.h>

#import "AVVCDuckOverride.h"
#import "AVVCDuckFadeDuration.h"

@interface AVVCDuckSettings : NSObject

@property (retain, nonatomic) AVVCDuckOverride *duckOverride; // ivar: _duckOverride
@property (retain, nonatomic) AVVCDuckFadeDuration *fadeDuration; // ivar: _fadeDuration


-(id)description;
-(id)init;
-(void)dealloc;


@end


#endif