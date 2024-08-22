// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CCVEGAPATHMARKDEF_H
#define CCVEGAPATHMARKDEF_H

@class NSString;


#import "CCVegaSingleItemShapeMarkDef.h"

@interface CCVegaPathMarkDef : CCVegaSingleItemShapeMarkDef {
    NSString *_cachedPathDef;
    *CGPath _cachedPath;
}




-(struct CATransform3D )transformForMark:(id)arg0 ;
-(struct CGPath *)newPathForMark:(id)arg0 ;
-(void)dealloc;


@end


#endif