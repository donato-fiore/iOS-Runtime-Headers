// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKDATAMETADATAWORKOUTROUTESECTION_H
#define HKDATAMETADATAWORKOUTROUTESECTION_H



#import "HKDataMetadataSection.h"
#import "HKDataMetadataWorkoutRouteCell.h"
#import "HKRouteMapGenerator.h"
#import "HKLocationFetcher.h"
#import "HKLocationReadings.h"

@interface HKDataMetadataWorkoutRouteSection : HKDataMetadataSection

@property (retain, nonatomic) HKDataMetadataWorkoutRouteCell *cell; // ivar: _cell
@property (retain, nonatomic) HKRouteMapGenerator *generator; // ivar: _generator
@property (retain, nonatomic) HKLocationFetcher *locationFetcher; // ivar: _locationFetcher
@property (readonly, nonatomic) HKLocationReadings *locationReadings; // ivar: _locationReadings


-(NSUInteger)numberOfRowsInSection;
-(id)cellForIndex:(NSUInteger)arg0 tableView:(id)arg1 ;
-(id)initWithLocationReadings:(id)arg0 ;
-(id)sectionTitle;
-(void)generateRouteImage;
-(void)selectCellForIndex:(NSUInteger)arg0 navigationController:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif