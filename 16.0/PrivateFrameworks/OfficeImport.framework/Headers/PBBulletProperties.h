// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBBULLETPROPERTIES_H
#define PBBULLETPROPERTIES_H


#import <Foundation/Foundation.h>


@interface PBBulletProperties : NSObject



+(id)readBulletProperties:(struct PptParaProperty9 *)arg0 state:(id)arg1 ;
+(int)readBulletNumberScheme:(int)arg0 ;
+(int)readBulletNumberSchemeFromExtended:(unsigned int)arg0 ;
+(int)writeBulletNumberScheme:(int)arg0 ;


@end


#endif