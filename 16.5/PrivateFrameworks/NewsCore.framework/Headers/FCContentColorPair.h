// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCCONTENTCOLORPAIR_H
#define FCCONTENTCOLORPAIR_H


#import <Foundation/Foundation.h>

#import "FCColor.h"

@interface FCContentColorPair : NSObject

@property (readonly, copy, nonatomic) FCColor *darkColor; // ivar: _darkColor
@property (readonly, copy, nonatomic) FCColor *lightColor; // ivar: _lightColor


+(id)colorPairWithDictionary:(id)arg0 ;
-(id)initWithLightColor:(id)arg0 darkColor:(id)arg1 ;


@end


#endif