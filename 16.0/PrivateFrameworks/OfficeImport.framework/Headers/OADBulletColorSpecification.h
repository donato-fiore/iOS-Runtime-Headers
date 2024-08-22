// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OADBULLETCOLORSPECIFICATION_H
#define OADBULLETCOLORSPECIFICATION_H



#import "OADBulletColor.h"
#import "OADColor.h"

@interface OADBulletColorSpecification : OADBulletColor {
    OADColor *mColor;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)color;
-(id)initWithBulletColor:(id)arg0 ;


@end


#endif