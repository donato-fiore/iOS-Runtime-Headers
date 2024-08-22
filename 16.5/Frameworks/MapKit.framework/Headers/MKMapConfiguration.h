// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKMAPCONFIGURATION_H
#define MKMAPCONFIGURATION_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface MKMapConfiguration : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) NSInteger elevationStyle; // ivar: _elevationStyle
@property (nonatomic) NSInteger landscape;


+(BOOL)supportsSecureCoding;
+(id)_mapConfigurationWithCartographicConfiguration:(struct ? )arg0 ;
+(id)_potentiallyLossy_mapConfigurationWithCartographicConfiguration:(struct ? )arg0 ;
+(struct ? )_cartographicConfigurationForMapConfiguration:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithElevationStyle:(NSInteger)arg0 ;
-(void)_addObserver:(id)arg0 options:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)_removeObserver:(id)arg0 context:(*void)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)inheritStateFromMapView:(id)arg0 ;
-(void)updateMapViewState:(id)arg0 ;


@end


#endif