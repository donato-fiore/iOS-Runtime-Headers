// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLEXISTINGMOMENTDATA_H
#define PLEXISTINGMOMENTDATA_H

@class NSDateInterval, NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PLExistingMomentData : NSObject

@property (readonly, nonatomic) NSDateInterval *dateInterval; // ivar: _dateInterval
@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) NSUInteger numberOfAssets; // ivar: _numberOfAssets
@property (readonly, nonatomic) NSObject<NSCopying> *objectID; // ivar: _objectID
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithMoment:(id)arg0 ;
-(void)registerAsset:(id)arg0 ;


@end


#endif