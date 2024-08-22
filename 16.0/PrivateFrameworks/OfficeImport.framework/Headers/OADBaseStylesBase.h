// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OADBASESTYLESBASE_H
#define OADBASESTYLESBASE_H


#import <Foundation/Foundation.h>

#import "OADColorScheme.h"
#import "OADFontScheme.h"
#import "OADStyleMatrix.h"

@interface OADBaseStylesBase : NSObject

@property (retain, nonatomic) OADColorScheme *colorScheme; // ivar: mColorScheme
@property (retain, nonatomic) OADFontScheme *fontScheme; // ivar: mFontScheme
@property (retain, nonatomic) OADStyleMatrix *styleMatrix; // ivar: mStyleMatrix


-(id)description;


@end


#endif