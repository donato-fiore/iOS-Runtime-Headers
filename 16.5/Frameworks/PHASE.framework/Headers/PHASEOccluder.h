// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHASEOCCLUDER_H
#define PHASEOCCLUDER_H

@class NSArray;


#import "PHASEObject.h"

@interface PHASEOccluder : PHASEObject

@property (nonatomic) BOOL isStatic; // ivar: _isStatic
@property (nonatomic) float materialScaleFactor; // ivar: _materialScaleFactor
@property (readonly, copy, nonatomic) NSArray *shapes; // ivar: _shapes


+(id)new;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithEngine:(id)arg0 shapes:(id)arg1 ;


@end


#endif