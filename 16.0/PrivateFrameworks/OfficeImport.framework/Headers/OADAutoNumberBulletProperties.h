// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OADAUTONUMBERBULLETPROPERTIES_H
#define OADAUTONUMBERBULLETPROPERTIES_H



#import "OADBulletProperties.h"

@interface OADAutoNumberBulletProperties : OADBulletProperties {
    int mSchemeType;
    NSUInteger mStartIndex;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)startIndex;
-(id)initWithAutoNumberSchemeType:(int)arg0 startIndex:(NSUInteger)arg1 ;
-(int)autoNumberSchemeType;


@end


#endif