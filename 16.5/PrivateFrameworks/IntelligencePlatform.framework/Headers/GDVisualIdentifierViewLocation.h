// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GDVISUALIDENTIFIERVIEWLOCATION_H
#define GDVISUALIDENTIFIERVIEWLOCATION_H

@class NSArray, NSString;


#import "GDLocation.h"

@interface GDVisualIdentifierViewLocation : GDLocation

@property (readonly, nonatomic) NSArray *addresses;
@property (retain, nonatomic) NSString *label; // ivar: _label
@property (retain, nonatomic) NSArray *names;


-(id)description;


@end


#endif