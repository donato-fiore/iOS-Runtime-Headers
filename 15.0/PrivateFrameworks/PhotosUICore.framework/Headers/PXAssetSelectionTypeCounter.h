// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXASSETSELECTIONTYPECOUNTER_H
#define PXASSETSELECTIONTYPECOUNTER_H

@class NSString;
@protocol PXChangeObserver, PXInfoProvider, PXInfoUpdaterObserver, OS_dispatch_queue;


#import "PXObservable.h"
#import "PXInfoUpdater.h"
#import "PXSectionedSelectionManager.h"

@interface PXAssetSelectionTypeCounter : PXObservable <PXChangeObserver, PXInfoProvider, PXInfoUpdaterObserver>

 {
    NSObject<OS_dispatch_queue> *_countUpdateQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PXInfoUpdater *infoUpdater; // ivar: _infoUpdater
@property (readonly, weak, nonatomic) PXSectionedSelectionManager *selectionManager; // ivar: _selectionManager
@property (readonly) Class superclass;
@property (nonatomic) ? typedCount; // ivar: _typedCount


-(NSInteger)priorityForInfoRequestOfKind:(id)arg0 ;
-(id)init;
-(id)initWithSelectionManager:(id)arg0 ;
-(id)requestInfoOfKind:(id)arg0 withResultHandler:(id)arg1 ;
-(id)selectionSnapshot;
-(void)infoUpdaterDidUpdate:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif