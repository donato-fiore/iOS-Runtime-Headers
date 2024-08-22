// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OADBULLETFONTSPECIFICATION_H
#define OADBULLETFONTSPECIFICATION_H

@class NSString;


#import "OADBulletFont.h"

@interface OADBulletFontSpecification : OADBulletFont {
    NSString *mFont;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)font;
-(id)initWithFont:(id)arg0 ;


@end


#endif