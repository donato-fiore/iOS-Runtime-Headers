// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUCURATIONKEYASSETCOMPARISONDEBUGVIEWCONTROLLER_H
#define PUCURATIONKEYASSETCOMPARISONDEBUGVIEWCONTROLLER_H

@class NSArray, NSMutableArray, NSString;
@protocol UICollectionViewDataSource, UICollectionViewDelegate;


#import "PUPhotosAlbumViewController.h"

@interface PUCurationKeyAssetComparisonDebugViewController : PUPhotosAlbumViewController <UICollectionViewDataSource, UICollectionViewDelegate>

 {
    NSArray *_highlights;
    NSMutableArray *_currentKeyAssets;
    NSMutableArray *_legacyKeyAssets;
    NSMutableArray *_modernKeyAssets;
    NSMutableArray *_keyAssetReasons;
    NSMutableArray *_indexMap;
    NSArray *_visibleAssets;
    BOOL _showsDifferentOnly;
    BOOL _showsMeaningsOnly;
    BOOL _canLiveUpdate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldShowSectionHeaders;
-(void)_fetchHighlights;
-(void)didTapHeaderView:(id)arg0 ;
-(void)toggleShowsDifferentOnly:(id)arg0 ;
-(void)toggleShowsMeaningsOnly:(id)arg0 ;
-(void)updateData;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif