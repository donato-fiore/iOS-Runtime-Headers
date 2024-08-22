// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOROUTERESTRICTIONZONEID_H
#define GEOROUTERESTRICTIONZONEID_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GEORouteRestrictionZoneID : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUInteger identifier; // ivar: _identifier
@property (readonly, nonatomic) NSInteger restrictionType; // ivar: _restrictionType
@property (readonly, nonatomic) NSUInteger version; // ivar: _version


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGeoRestrictedZoneId:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif