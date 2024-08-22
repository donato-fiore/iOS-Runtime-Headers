// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUICOMMONCOLLECTIONVIEWHANDLER_H
#define AMSUICOMMONCOLLECTIONVIEWHANDLER_H

@class NSString;
@protocol UICollectionViewDelegate, AMSUICommonCollectionViewDelegate;

#import <Foundation/Foundation.h>

#import "AMSUICommonCollectionView.h"

@interface AMSUICommonCollectionViewHandler : NSObject <UICollectionViewDelegate>



@property (readonly, weak, nonatomic) AMSUICommonCollectionView *collectionView; // ivar: _collectionView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AMSUICommonCollectionViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(id)initWithCollectionView:(id)arg0 ;
-(void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;


@end


#endif