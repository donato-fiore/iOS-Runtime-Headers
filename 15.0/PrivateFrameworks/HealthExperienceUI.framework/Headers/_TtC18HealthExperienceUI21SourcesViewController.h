// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC18HEALTHEXPERIENCEUI21SOURCESVIEWCONTROLLER_H
#define _TTC18HEALTHEXPERIENCEUI21SOURCESVIEWCONTROLLER_H

@class TtC18HealthExperienceUI42CompoundDataSourceCollectionViewController;



@interface _TtC18HealthExperienceUI21SourcesViewController : TtC18HealthExperienceUI42CompoundDataSourceCollectionViewController {
    ? sourceType;
    ? profileName;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithCollectionViewLayout:(id)arg0 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif