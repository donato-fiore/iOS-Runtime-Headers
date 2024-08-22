// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUEDITLOCATIONACTIVITY_H
#define PUEDITLOCATIONACTIVITY_H

@class PXActivity, NSString;
@protocol PXPhotosDetailsLocationSearchDelegate;



@interface PUEditLocationActivity : PXActivity <PXPhotosDetailsLocationSearchDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSInteger)activityCategory;
-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)_systemImageName;
-(id)activityTitle;
-(id)activityType;
-(id)activityViewController;
-(void)locationSearchDataSource:(id)arg0 didSelectLocationSearchResult:(id)arg1 ;
-(void)locationSearchDataSourceDidRemoveLocation:(id)arg0 ;


@end


#endif