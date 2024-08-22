// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMSTRUCTUREDLOCATION_H
#define REMSTRUCTUREDLOCATION_H

@class NSString, NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface REMStructuredLocation : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *address; // ivar: _address
@property (copy, nonatomic) NSString *contactLabel; // ivar: _contactLabel
@property (nonatomic) CGFloat latitude; // ivar: _latitude
@property (readonly, nonatomic) NSString *locationUID; // ivar: _locationUID
@property (nonatomic) CGFloat longitude; // ivar: _longitude
@property (copy, nonatomic) NSData *mapKitHandle; // ivar: _mapKitHandle
@property (nonatomic) CGFloat radius; // ivar: _radius
@property (copy, nonatomic) NSString *referenceFrameString; // ivar: _referenceFrameString
@property (copy, nonatomic) NSString *routing; // ivar: _routing
@property (copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
+(CGFloat)minimumRegionMonitoringDistance;
-(BOOL)isContentEqual:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)displayName;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 ;
-(id)initWithTitle:(id)arg0 locationUID:(id)arg1 ;
-(id)initWithTitle:(id)arg0 locationUID:(id)arg1 latitude:(CGFloat)arg2 longitude:(CGFloat)arg3 radius:(CGFloat)arg4 address:(id)arg5 routing:(id)arg6 referenceFrameString:(id)arg7 contactLabel:(id)arg8 mapKitHandle:(id)arg9 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif