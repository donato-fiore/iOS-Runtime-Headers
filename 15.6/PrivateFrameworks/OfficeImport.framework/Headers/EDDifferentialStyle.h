// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDDIFFERENTIALSTYLE_H
#define EDDIFFERENTIALSTYLE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "EDAlignmentInfo.h"
#import "EDBorders.h"
#import "EDContentFormat.h"
#import "EDFill.h"
#import "EDFont.h"
#import "EDProtection.h"

@interface EDDifferentialStyle : NSObject <NSCopying>



@property (retain, nonatomic) EDAlignmentInfo *alignmentInfo; // ivar: mAlignmentInfo
@property (retain, nonatomic) EDBorders *borders; // ivar: mBorders
@property (retain, nonatomic) EDContentFormat *contentFormat; // ivar: mContentFormat
@property (retain, nonatomic) EDFill *fill; // ivar: mFill
@property (retain, nonatomic) EDFont *font; // ivar: mFont
@property (retain, nonatomic) EDProtection *protection; // ivar: mProtection


+(id)differentialStyle;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif