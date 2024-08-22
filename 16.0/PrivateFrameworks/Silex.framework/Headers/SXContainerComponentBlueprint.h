// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXCONTAINERCOMPONENTBLUEPRINT_H
#define SXCONTAINERCOMPONENTBLUEPRINT_H



#import "SXComponentBlueprint.h"
#import "SXLayoutBlueprint.h"

@interface SXContainerComponentBlueprint : SXComponentBlueprint

@property (retain, nonatomic) SXLayoutBlueprint *layoutBlueprint; // ivar: _layoutBlueprint


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)setParentLayoutBlueprint:(id)arg0 ;


@end


#endif