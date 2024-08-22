// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXTEXTCOMPONENTBLUEPRINT_H
#define SXTEXTCOMPONENTBLUEPRINT_H

@class NSDictionary;


#import "SXComponentBlueprint.h"

@interface SXTextComponentBlueprint : SXComponentBlueprint

@property (readonly, nonatomic) NSDictionary *exclusionPaths; // ivar: _exclusionPaths


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)addExclusionPath:(id)arg0 forIdentifier:(id)arg1 ;
-(void)invalidateSize;


@end


#endif