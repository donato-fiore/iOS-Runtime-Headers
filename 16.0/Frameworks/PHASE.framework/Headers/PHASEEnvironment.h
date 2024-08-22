// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHASEENVIRONMENT_H
#define PHASEENVIRONMENT_H

@class NSArray;


#import "PHASEObject.h"
#import "PHASEMedium.h"

@interface PHASEEnvironment : PHASEObject

@property (retain, nonatomic) PHASEMedium *medium; // ivar: _medium
@property (nonatomic) float mediumScaleFactor; // ivar: _mediumScaleFactor
@property (readonly, copy, nonatomic) NSArray *shapes; // ivar: _shapes


+(id)new;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithEngine:(id)arg0 shapes:(id)arg1 ;


@end


#endif