// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUIMPORTONEUPVIEWCONTROLLERSPECMANAGER_H
#define PUIMPORTONEUPVIEWCONTROLLERSPECMANAGER_H

@class PXFeatureSpecManager;


#import "PUImportOneUpViewControllerSpec.h"

@interface PUImportOneUpViewControllerSpecManager : PXFeatureSpecManager

@property (readonly, nonatomic) PUImportOneUpViewControllerSpec *spec;
@property (readonly, nonatomic) NSUInteger style; // ivar: _style


-(id)createSpec;
-(id)initWithExtendedTraitCollection:(id)arg0 options:(NSUInteger)arg1 ;
-(id)initWithExtendedTraitCollection:(id)arg0 options:(NSUInteger)arg1 style:(NSUInteger)arg2 ;


@end


#endif