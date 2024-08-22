// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKPLACECOLLECTIONVIEWCONTROLLER_H
#define MKPLACECOLLECTIONVIEWCONTROLLER_H

@class NSDictionary, NSMutableDictionary, NSString;
@protocol MKPlaceSectionViewDelegate, MKModuleViewControllerProtocol, MKCollectionViewProvider;


#import "MKPlaceSectionViewController.h"
#import "MKPlaceSectionHeaderView.h"

@interface MKPlaceCollectionViewController : MKPlaceSectionViewController <MKPlaceSectionViewDelegate, MKModuleViewControllerProtocol>

 {
    NSDictionary *_collectionViews;
    NSMutableDictionary *_sectionsViews;
    MKPlaceSectionHeaderView *_headerView;
    BOOL _shouldReloadCollection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<MKCollectionViewProvider> *viewProvider; // ivar: _viewProvider


-(BOOL)_canShowWhileLocked;
-(void)reloadCollectionsAnimated:(BOOL)arg0 ;
-(void)sectionView:(id)arg0 didDeselectRow:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)sectionView:(id)arg0 didSelectFooter:(id)arg1 ;
-(void)sectionView:(id)arg0 didSelectHeader:(id)arg1 ;
-(void)sectionView:(id)arg0 didSelectRow:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif