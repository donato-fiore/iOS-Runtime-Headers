// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOLOCATIONSHIFTFUNCTIONRESPONSE_H
#define GEOLOCATIONSHIFTFUNCTIONRESPONSE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GEOLocationShiftFunctionResponse : NSObject <NSSecureCoding>

 {
    CGFloat _params;
    BOOL _shouldUsePolyShiftFunction;
}


@property (readonly, nonatomic) ? originalCoordinate; // ivar: _originalCoordinate
@property (readonly, nonatomic) CGFloat radius; // ivar: _radius
@property (readonly, nonatomic) unsigned int version; // ivar: _version


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValidForCoordinate:(struct ? )arg0 ;
-(id)contractFunctionTo:(id)arg0 withRadius:(CGFloat)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPolyLocationShiftResponse:(id)arg0 originalCoordinate:(struct ? )arg1 version:(unsigned int)arg2 ;
-(struct ? )shiftedCoordinateForCoordinate:(struct ? )arg0 accuracy:(*CGFloat)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif