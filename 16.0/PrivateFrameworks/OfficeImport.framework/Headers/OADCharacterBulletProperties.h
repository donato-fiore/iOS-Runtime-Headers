// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OADCHARACTERBULLETPROPERTIES_H
#define OADCHARACTERBULLETPROPERTIES_H

@class NSString;


#import "OADBulletProperties.h"

@interface OADCharacterBulletProperties : OADBulletProperties {
    NSString *mBullet;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)bullet;
-(id)initWithBullet:(id)arg0 ;


@end


#endif