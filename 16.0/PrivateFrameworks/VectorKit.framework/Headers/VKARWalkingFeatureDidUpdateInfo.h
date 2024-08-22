// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VKARWALKINGFEATUREDIDUPDATEINFO_H
#define VKARWALKINGFEATUREDIDUPDATEINFO_H


#import <Foundation/Foundation.h>

#import "VKARWalkingFeature.h"
#import "VKARWalkingFeatureSet.h"

@interface VKARWalkingFeatureDidUpdateInfo : NSObject {
    _retain_ptr<VKARWalkingFeature *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> _feature;
    _retain_ptr<VKARWalkingFeatureSet *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> _featureSet;
    Unit<geo::DegreeUnitDescription, double> _screenHeading;
}


@property (readonly, nonatomic) VKARWalkingFeature *feature;
@property (readonly, nonatomic) NSUInteger featureLabelIdentifier; // ivar: _featureLabelIdentifier
@property (readonly, nonatomic) VKARWalkingFeatureSet *featureSet;
@property (readonly, nonatomic) BOOL isDirectlyBehind; // ivar: _isDirectlyBehind
@property (readonly, nonatomic) BOOL isVisible; // ivar: _isVisible
@property (readonly, nonatomic) ? labelPosition; // ivar: _labelPosition
@property (readonly, nonatomic) CGFloat screenHeading;
@property (readonly, nonatomic) NSInteger updateTypes; // ivar: _updateTypes


-(id)description;
-(id)initWithFeature:(id)arg0 featureLabelIdentifier:(NSUInteger)arg1 featureSet:(id)arg2 labelPosition:(*void)arg3 updateTypes:(NSInteger)arg4 isVisible:(BOOL)arg5 isDirectlyBehind:(BOOL)arg6 screenHeading:(struct Unit<geo::DegreeUnitDescription, double> )arg7 ;
-(id)stringForUpdateTypes;


@end


#endif