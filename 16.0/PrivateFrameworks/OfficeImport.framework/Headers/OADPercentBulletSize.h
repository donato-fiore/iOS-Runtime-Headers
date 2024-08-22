// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OADPERCENTBULLETSIZE_H
#define OADPERCENTBULLETSIZE_H



#import "OADBulletSize.h"

@interface OADPercentBulletSize : OADBulletSize {
    float mPercent;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(float)percent;
-(id)initWithPercent:(float)arg0 ;


@end


#endif