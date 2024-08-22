// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUCOLLECTIONSCOLLECTIONVIEWDROPDELEGATE_H
#define PUCOLLECTIONSCOLLECTIONVIEWDROPDELEGATE_H

@class NSString;
@protocol UICollectionViewDropDelegate, PUCollectionsCollectionViewDropDataProvider;

#import <Foundation/Foundation.h>


@interface PUCollectionsCollectionViewDropDelegate : NSObject <UICollectionViewDropDelegate>

 {
    BOOL _dataProviderImplementsAllowDrop;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<PUCollectionsCollectionViewDropDataProvider> *dropDataProvider; // ivar: _dropDataProvider
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_allowDrop;
-(BOOL)_canHandleDropSession:(id)arg0 ;
-(BOOL)collectionView:(id)arg0 canHandleDropSesson:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldSpringLoadItemAtIndexPath:(id)arg1 withContext:(id)arg2 ;
-(id)_collectionAtIndexPath:(id)arg0 ;
-(id)collectionView:(id)arg0 dropSessionDidUpdate:(id)arg1 withDestinationIndexPath:(id)arg2 ;
-(void)_handleDrop:(id)arg0 forItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 performDropWithCoordinator:(id)arg1 ;


@end


#endif