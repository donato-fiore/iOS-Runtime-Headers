// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGSPECIALPOIRESOLVER_H
#define PGSPECIALPOIRESOLVER_H

@class NSMutableDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface PGSpecialPOIResolver : NSObject

@property (retain, nonatomic) NSMutableDictionary *countBySpecialPOI; // ivar: _countBySpecialPOI
@property (readonly, nonatomic) NSArray *momentNodes; // ivar: _momentNodes


+(BOOL)specialPOIContainsCoordinate:(struct CLLocationCoordinate2D )arg0 ;
+(BOOL)specialPOINameIsInString:(id)arg0 ;
+(NSUInteger)specialPOIsContainingCoordinate:(struct CLLocationCoordinate2D )arg0 ;
+(NSUInteger)specialPOIsWithNameInString:(id)arg0 ;
+(id)_nameBySpecialPOI;
+(id)_regionsBySpecialPOI;
-(BOOL)anyMomentContainsSpecialPOI:(NSUInteger)arg0 ;
-(BOOL)anyMomentHasPOIAmusementPark;
-(BOOL)momentsContainSpecialPOI:(NSUInteger)arg0 withMomentRatio:(CGFloat)arg1 ;
-(NSUInteger)_numberOfMomentsInRegions:(id)arg0 containingAOIName:(id)arg1 ;
-(NSUInteger)_numberOfMomentsMatchingSpecialPOI:(NSUInteger)arg0 ;
-(NSUInteger)specialPOIsInAnyMoment;
-(NSUInteger)specialPOIsWithMomentRatio:(CGFloat)arg0 ;
-(id)initWithMomentNodes:(id)arg0 ;


@end


#endif