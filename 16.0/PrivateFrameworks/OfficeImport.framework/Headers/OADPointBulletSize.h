// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OADPOINTBULLETSIZE_H
#define OADPOINTBULLETSIZE_H



#import "OADBulletSize.h"

@interface OADPointBulletSize : OADBulletSize {
    int mPoints;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithPoints:(int)arg0 ;
-(int)points;


@end


#endif