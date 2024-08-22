// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OADIMAGEBULLETPROPERTIES_H
#define OADIMAGEBULLETPROPERTIES_H



#import "OADBulletProperties.h"
#import "OADBlipRef.h"

@interface OADImageBulletProperties : OADBulletProperties {
    OADBlipRef *mImage;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)image;
-(id)initWithBlipRef:(id)arg0 ;


@end


#endif