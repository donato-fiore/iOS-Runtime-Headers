// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCMMSPECMANAGER_H
#define PXCMMSPECMANAGER_H



#import "PXFeatureSpecManager.h"
#import "PXCMMSpec.h"

@interface PXCMMSpecManager : PXFeatureSpecManager

@property (readonly, nonatomic) NSUInteger activityType; // ivar: _activityType
@property (readonly, nonatomic) PXCMMSpec *spec;


-(id)createSpec;
-(id)initWithExtendedTraitCollection:(id)arg0 activityType:(NSUInteger)arg1 ;
-(id)initWithExtendedTraitCollection:(id)arg0 options:(NSUInteger)arg1 ;
-(id)initWithExtendedTraitCollection:(id)arg0 options:(NSUInteger)arg1 activityType:(NSUInteger)arg2 ;


@end


#endif