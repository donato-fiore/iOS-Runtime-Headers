// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXMEMORIESSPECMANAGER_H
#define PXMEMORIESSPECMANAGER_H



#import "PXFeatureSpecManager.h"
#import "PXMemoriesSpec.h"

@interface PXMemoriesSpecManager : PXFeatureSpecManager

@property (readonly, nonatomic) PXMemoriesSpec *spec;
@property (readonly, nonatomic) NSUInteger style; // ivar: _style


-(BOOL)shouldUpdateSpecForExtendedTraitCollection:(id)arg0 change:(NSUInteger)arg1 ;
-(id)createSpec;
-(id)initWithExtendedTraitCollection:(id)arg0 options:(NSUInteger)arg1 ;
-(id)initWithExtendedTraitCollection:(id)arg0 options:(NSUInteger)arg1 style:(NSUInteger)arg2 ;


@end


#endif