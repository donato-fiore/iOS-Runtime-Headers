// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPLOCATIONCLUSTERID_H
#define PPLOCATIONCLUSTERID_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PPLocationClusterID : NSObject <NSCopying>



@property (retain, nonatomic) NSString *administrativeArea; // ivar: _administrativeArea
@property (retain, nonatomic) NSString *locality; // ivar: _locality
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSString *subLocality; // ivar: _subLocality
@property (retain, nonatomic) NSString *subThoroughfare; // ivar: _subThoroughfare
@property (retain, nonatomic) NSString *thoroughfare; // ivar: _thoroughfare


+(BOOL)asClusterIDPlacemark:(id)arg0 isEqualToPlacemark:(id)arg1 ;
+(id)broadenClusterId:(id)arg0 ;
+(id)clustersWithRecords:(id)arg0 ;
+(id)latLongTableWithClusters:(id)arg0 ;
+(id)lookupTableWithRecords:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithName:(id)arg0 subThoroughfare:(id)arg1 thoroughfare:(id)arg2 subLocality:(id)arg3 locality:(id)arg4 administrativeArea:(id)arg5 ;
-(id)initWithPlacemark:(id)arg0 ;


@end


#endif