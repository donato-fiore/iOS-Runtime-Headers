// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RTLOCATIONOFINTEREST_H
#define RTLOCATIONOFINTEREST_H

@class NSString, NSUUID, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "RTLocation.h"
#import "RTMapItem.h"

@interface RTLocationOfInterest : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) CGFloat confidence; // ivar: _confidence
@property (readonly, nonatomic) NSString *customLabel; // ivar: _customLabel
@property (readonly, nonatomic) NSUInteger geoMapItemSource;
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) CGFloat latitude;
@property (readonly, nonatomic) RTLocation *location; // ivar: _location
@property (readonly, nonatomic) CGFloat longitude;
@property (readonly, nonatomic) RTMapItem *mapItem; // ivar: _mapItem
@property (readonly, nonatomic) NSString *preferredName;
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic) NSUInteger typeSource; // ivar: _typeSource
@property (readonly, nonatomic) CGFloat uncertainty;
@property (readonly, nonatomic) NSArray *visits; // ivar: _visits


+(BOOL)locationOfInterestTypeIsValid:(NSInteger)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)geoMapItemSourceToString:(NSUInteger)arg0 ;
+(id)locationOfInterestTypeSourceToString:(NSUInteger)arg0 ;
+(id)locationOfInterestTypeToString:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)recentCompare:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocation:(id)arg0 confidence:(CGFloat)arg1 identifier:(id)arg2 type:(NSInteger)arg3 typeSource:(NSUInteger)arg4 visits:(id)arg5 customLabel:(id)arg6 mapItem:(id)arg7 ;
-(id)nameFromType:(NSInteger)arg0 ;
-(id)pruneVisitsWithDateInterval:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif