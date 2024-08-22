// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLIPBACKGROUND_H
#define CLIPBACKGROUND_H

@class PVEffect, NSMutableDictionary, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ClipBackground : NSObject <NSCopying>

 {
    PVEffect *_effect;
}


@property (readonly, nonatomic) PVEffect *backgroundEffect;
@property (retain, nonatomic) NSMutableDictionary *backgroundEffectSettings; // ivar: _backgroundEffectSettings
@property (readonly, nonatomic) NSString *effectID;
@property (nonatomic) int type; // ivar: _type


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif