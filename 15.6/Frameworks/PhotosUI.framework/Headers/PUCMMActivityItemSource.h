// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUCMMACTIVITYITEMSOURCE_H
#define PUCMMACTIVITYITEMSOURCE_H

@class PXObservable, NSString, NSArray, NSURL, NSError;
@protocol PUActivityItemSourceOperationDelegate, PXChangeObserver, UIActivityItemsSource, UIActivityItemDeferredSource, UIActivityItemSource, PUCMMActivityItemSourceDelegate, OS_dispatch_queue;


#import "PUActivityItemSourceController.h"
#import "PUActivityItemSourceOperation.h"

@interface PUCMMActivityItemSource : PXObservable <PUActivityItemSourceOperationDelegate, PXChangeObserver, UIActivityItemsSource, UIActivityItemDeferredSource, UIActivityItemSource>



@property (retain, nonatomic) NSString *activityType; // ivar: _activityType
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PUCMMActivityItemSourceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *externalIsolationQueue; // ivar: _externalIsolationQueue
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *individuallyPreparedItems; // ivar: _individuallyPreparedItems
@property (readonly, weak, nonatomic) PUActivityItemSourceController *itemSourceController; // ivar: _itemSourceController
@property (copy, nonatomic) NSURL *momentShareLink; // ivar: _momentShareLink
@property (retain, nonatomic) NSError *preparationError; // ivar: _preparationError
@property (retain, nonatomic) PUActivityItemSourceOperation *preparationOperation; // ivar: _preparationOperation
@property (readonly, nonatomic) NSUInteger state; // ivar: _state
@property (readonly) Class superclass;


-(id)activityViewController:(id)arg0 itemForActivityType:(id)arg1 ;
-(id)activityViewController:(id)arg0 itemsForActivityType:(id)arg1 ;
-(id)activityViewControllerOperation:(id)arg0 ;
-(id)activityViewControllerPlaceholderItem:(id)arg0 ;
-(id)activityViewControllerPlaceholderItems:(id)arg0 ;
-(id)initWithActivityItemSourceController:(id)arg0 ;
-(id)placeholderItemsForActivityViewController:(id)arg0 ;
-(id)preparedItems;
-(void)activityItemSourceOperation:(id)arg0 prepareItemForActivityType:(id)arg1 ;
-(void)cancel;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif