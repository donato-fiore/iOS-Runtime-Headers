// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DNDMUTABLEMODE_H
#define DNDMUTABLEMODE_H

@class NSString;


#import "DNDMode.h"

@interface DNDMutableMode : DNDMode

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *symbolImageName;
@property (copy, nonatomic) NSString *tintColorName;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif