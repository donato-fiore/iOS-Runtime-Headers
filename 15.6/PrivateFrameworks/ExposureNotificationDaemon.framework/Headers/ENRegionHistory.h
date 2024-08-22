// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ENREGIONHISTORY_H
#define ENREGIONHISTORY_H

@class NSMutableArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ENRegionHistory : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSMutableArray *regionHistory; // ivar: _regionHistory


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)getRegionVisits;
-(id)getRegions;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRegionVisits:(id)arg0 ;
-(void)addRegionVisit:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeAllRegionVisits;
-(void)removeRegionVisit:(id)arg0 ;


@end


#endif