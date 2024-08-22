// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VKROUTEETADESCRIPTION_H
#define VKROUTEETADESCRIPTION_H

@class NSString, GEOFeatureStyleAttributes;

#import <Foundation/Foundation.h>


@interface VKRouteEtaDescription : NSObject {
    _retain_ptr<NSString *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> _etaText;
}


@property (readonly, nonatomic) NSString *etaText;
@property (readonly, nonatomic) unsigned char glyphType; // ivar: _glyphType
@property (readonly, nonatomic) NSInteger routeEtaType; // ivar: _routeEtaType
@property (readonly, nonatomic) GEOFeatureStyleAttributes *styleAttributes; // ivar: _styleAttributes


-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithEtaText:(id)arg0 styleAttributes:(id)arg1 routeEtaType:(NSInteger)arg2 ;
-(id)initWithEtaText:(id)arg0 ;
-(id)initWithEtaText:(id)arg0 etaAdvisoryFeatureStyleAttributes:(id)arg1 ;
-(id)initWithEtaText:(id)arg0 etaAdvisoryFeatureStyleAttributes:(id)arg1 routeEtaType:(NSInteger)arg2 ;
-(id)initWithEtaText:(id)arg0 etaAdvisoryStyleAttributes:(id)arg1 ;
-(id)initWithEtaText:(id)arg0 etaAdvisoryStyleAttributes:(id)arg1 routeEtaType:(NSInteger)arg2 ;
-(id)initWithEtaText:(id)arg0 glyphType:(unsigned char)arg1 ;


@end


#endif