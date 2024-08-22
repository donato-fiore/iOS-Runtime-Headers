// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLREVGEOMAPITEM_H
#define PLREVGEOMAPITEM_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PLRevGeoMapItem : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSArray *backupPlaceInfos; // ivar: _backupPlaceInfos
@property (readonly, nonatomic) NSArray *finalPlaceInfos; // ivar: _finalPlaceInfos
@property (readonly, nonatomic) NSArray *sortedPlaceInfos; // ivar: _sortedPlaceInfos


+(BOOL)supportsSecureCoding;
+(id)mapItemWithGEOMapItem:(id)arg0 ;
+(id)placeInfoWithName:(id)arg0 geoPlaceInfo:(id)arg1 dominantOrderType:(NSUInteger)arg2 ;
+(id)sortedAdditionalPlaceInfoComparator:(SEL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSortedPlaceInfos:(id)arg0 backupPlaceInfos:(id)arg1 finalPlaceInfos:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif