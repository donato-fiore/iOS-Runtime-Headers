// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OADTHEME_H
#define OADTHEME_H

@class NSString;

#import <Foundation/Foundation.h>

#import "OADBaseStyles.h"
#import "OADDrawableDefaults.h"

@interface OADTheme : NSObject

@property (retain, nonatomic) OADBaseStyles *baseStyles; // ivar: mBaseStyles
@property (readonly, nonatomic) OADDrawableDefaults *drawableDefaults; // ivar: mDrawableDefaults
@property (copy, nonatomic) NSString *name; // ivar: mName


-(BOOL)isEmpty;
-(id)description;
-(id)init;
-(void)validateTheme;


@end


#endif