// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC26DOCUMENTMANAGEREXECUTABLESP33_A9279F4482FEAC8D0F3BCF83DF142AB324DOCTAGCOLLECTIONOBSERVER_H
#define _TTC26DOCUMENTMANAGEREXECUTABLESP33_A9279F4482FEAC8D0F3BCF83DF142AB324DOCTAGCOLLECTIONOBSERVER_H

@protocol FPItemCollectionIndexPathBasedDelegate;

#import <Foundation/Foundation.h>


@interface _TtC26DocumentManagerExecutablesP33_A9279F4482FEAC8D0F3BCF83DF142AB324DOCTagCollectionObserver : NSObject <FPItemCollectionIndexPathBasedDelegate>

 {
    ? gatheringKeyPath;
    ? serialQueue;
    ? group;
    ? spotlightQueryTimeout;
    ? collection;
    ? finishedGathering;
    ? collectionObservationContext;
}




-(id)init;
-(void)collection:(id)arg0 didDeleteItemsAtIndexPaths:(id)arg1 ;
-(void)collection:(id)arg0 didInsertItemsAtIndexPaths:(id)arg1 ;
-(void)collection:(id)arg0 didMoveItemsFromIndexPaths:(id)arg1 toIndexPaths:(id)arg2 ;
-(void)collection:(id)arg0 didPerformBatchUpdateWithReplayBlock:(id)arg1 ;
-(void)collection:(id)arg0 didUpdateItemsAtIndexPaths:(id)arg1 changes:(id)arg2 ;
-(void)dataForCollectionShouldBeReloaded:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif