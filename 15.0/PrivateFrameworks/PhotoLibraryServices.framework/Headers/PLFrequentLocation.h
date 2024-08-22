// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLFREQUENTLOCATION_H
#define PLFREQUENTLOCATION_H

@class NSDateInterval, NSString, NSSet, NSMutableArray;
@protocol PLFrequentLocationProtocol, PLMomentProcessingProtocol;

#import <Foundation/Foundation.h>


@interface PLFrequentLocation : NSObject <PLFrequentLocationProtocol>



@property (retain, nonatomic) NSObject<PLMomentProcessingProtocol> *centroid; // ivar: _centroid
@property (nonatomic) CLLocationCoordinate2D coordinate; // ivar: _coordinate
@property (retain, nonatomic) NSDateInterval *dateInterval; // ivar: _dateInterval
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSSet *momentsSet; // ivar: _momentsSet
@property (retain, nonatomic) NSMutableArray *sortedMoments; // ivar: _sortedMoments
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isSimilarToFrequentLocation:(id)arg0 ;
-(BOOL)isWithinDistance:(CGFloat)arg0 toCoordinate:(struct CLLocationCoordinate2D )arg1 ;
-(id)initWithSortedMoments:(id)arg0 ;
-(void)_invalidateLazyProperties;
-(void)addMomentToSortedMoment:(id)arg0 ;


@end


#endif