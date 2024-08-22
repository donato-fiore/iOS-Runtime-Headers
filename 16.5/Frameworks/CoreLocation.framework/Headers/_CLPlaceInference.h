// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CLPLACEINFERENCE_H
#define _CLPLACEINFERENCE_H

@class NSUUID, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "CLPlacemark.h"
#import "CLLocation.h"

@interface _CLPlaceInference : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSUUID *_loiIdentifier; // ivar: __loiIdentifier
@property (readonly, nonatomic) CGFloat confidence; // ivar: _confidence
@property (readonly, nonatomic) NSUInteger placeType; // ivar: _placeType
@property (readonly, nonatomic) CLPlacemark *placemark; // ivar: _placemark
@property (readonly, nonatomic) NSString *preferredName; // ivar: _preferredName
@property (readonly, nonatomic) CLLocation *referenceLocation; // ivar: _referenceLocation
@property (readonly, nonatomic) NSUInteger userType; // ivar: _userType


+(BOOL)supportsSecureCoding;
+(NSUInteger)_placeInferencePlaceTypeFromRTPlaceType:(NSUInteger)arg0 ;
+(NSUInteger)_userSpecificPlaceTypeFromRTUserType:(NSUInteger)arg0 ;
-(id)_initWithRTPlaceInference:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUserType:(NSUInteger)arg0 placeType:(NSUInteger)arg1 placemark:(id)arg2 referenceLocation:(id)arg3 confidence:(CGFloat)arg4 preferredName:(id)arg5 loiIdentifier:(id)arg6 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif