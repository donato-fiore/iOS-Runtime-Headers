// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLREVGEOPLACEINFO_H
#define PLREVGEOPLACEINFO_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PLRevGeoPlaceInfo : NSObject <NSSecureCoding>



@property (readonly, nonatomic) BOOL hasArea; // ivar: _hasArea
@property (readonly, nonatomic) CGFloat maximumArea; // ivar: _maximumArea
@property (readonly, nonatomic) CGFloat minimumArea; // ivar: _minimumArea
@property (readonly, copy, nonatomic) NSString *placeName; // ivar: _placeName


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPlaceName:(id)arg0 ;
-(void)addPlaceInfoArea:(CGFloat)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif