// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKARWALKINGFEATUREDIDUPDATEINFO_H
#define VKARWALKINGFEATUREDIDUPDATEINFO_H


#import <Foundation/Foundation.h>

#import "VKARWalkingFeature.h"
#import "VKARWalkingFeatureSet.h"

@interface VKARWalkingFeatureDidUpdateInfo : NSObject {
    _retain_ptr<VKARWalkingFeature *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> _feature;
    _retain_ptr<VKARWalkingFeatureSet *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> _featureSet;
    Unit<DegreeUnitDescription, double> _screenHeading;
}


@property (readonly, nonatomic) VKARWalkingFeature *feature;
@property (readonly, nonatomic) VKARWalkingFeatureSet *featureSet;
@property (readonly, nonatomic) BOOL isDirectlyBehind; // ivar: _isDirectlyBehind
@property (readonly, nonatomic) BOOL isVisible; // ivar: _isVisible
@property (readonly, nonatomic) ? labelPosition; // ivar: _labelPosition
@property (readonly, nonatomic) CGFloat screenHeading;
@property (readonly, nonatomic) NSInteger updateTypes; // ivar: _updateTypes


-(id)description;
-(id)initWithFeature:(id)arg0 featureSet:(id)arg1 labelPosition:(*void)arg2 updateTypes:(NSInteger)arg3 isVisible:(BOOL)arg4 isDirectlyBehind:(BOOL)arg5 screenHeading:(struct Unit<DegreeUnitDescription, double> )arg6 ;
-(id)stringForUpdateTypes;


@end


#endif