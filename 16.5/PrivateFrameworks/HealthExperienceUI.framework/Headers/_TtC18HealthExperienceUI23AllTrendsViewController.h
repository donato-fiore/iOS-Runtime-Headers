// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC18HEALTHEXPERIENCEUI23ALLTRENDSVIEWCONTROLLER_H
#define _TTC18HEALTHEXPERIENCEUI23ALLTRENDSVIEWCONTROLLER_H

@class TtC18HealthExperienceUI42CompoundDataSourceCollectionViewController;



@interface _TtC18HealthExperienceUI23AllTrendsViewController : TtC18HealthExperienceUI42CompoundDataSourceCollectionViewController {
    ? healthStore;
    ? healthExperienceStore;
    ? trendDataSource;
    ? cancellables;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithCollectionViewLayout:(id)arg0 ;
-(void)restoreUserActivityState:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif