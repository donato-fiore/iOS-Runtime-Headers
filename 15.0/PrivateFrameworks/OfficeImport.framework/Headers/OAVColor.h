// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OAVCOLOR_H
#define OAVCOLOR_H


#import <Foundation/Foundation.h>


@interface OAVColor : NSObject



+(id)readColorFromAttribute:(id)arg0 alpha:(float)arg1 manager:(id)arg2 ;
+(id)readColorProperty:(int)arg0 manager:(id)arg1 ;
+(id)readPropertyColorFromAttribute:(id)arg0 manager:(id)arg1 ;
+(id)readRGBColorFromAttribute:(id)arg0 ;
+(int)readColorAdjustmentType:(id)arg0 ;
+(int)readColorProperty:(id)arg0 ;


@end


#endif