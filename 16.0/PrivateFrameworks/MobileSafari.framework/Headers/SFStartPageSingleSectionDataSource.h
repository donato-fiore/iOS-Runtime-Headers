// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFSTARTPAGESINGLESECTIONDATASOURCE_H
#define SFSTARTPAGESINGLESECTIONDATASOURCE_H

@class NSString;
@protocol SFStartPageCollectionDataSource, SFStartPageDataSourceObserving;

#import <Foundation/Foundation.h>

#import "SFStartPageCollectionViewController.h"
#import "SFSectionModel.h"

@interface SFStartPageSingleSectionDataSource : NSObject <SFStartPageCollectionDataSource, SFStartPageDataSourceObserving>

 {
    SFStartPageCollectionViewController *_collectionViewController;
    SFSectionModel *_section;
    id *_reloadHandler;
    id *_navigationItemHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)startPageCollectionViewController:(id)arg0 isSectionExpanded:(id)arg1 ;
-(NSInteger)customizationControlPolicyForStartPageCollectionViewController:(id)arg0 ;
// -(id)initWithReloadHandler:(id)arg0 navigationItemHandler:(unk)arg1  ;
-(id)sectionsForStartPageCollectionViewController:(id)arg0 ;
-(void)_reloadSection;
-(void)connectToViewController:(id)arg0 ;
-(void)reloadDataAnimatingDifferences:(BOOL)arg0 ;
-(void)reloadNavigationItemAnimated:(BOOL)arg0 ;
-(void)startPageCollectionViewController:(id)arg0 editSection:(id)arg1 ;
-(void)startPageCollectionViewController:(id)arg0 toggleSectionExpanded:(id)arg1 ;
-(void)startPageCollectionViewControllerWillUpdateNavigationBar:(id)arg0 ;


@end


#endif