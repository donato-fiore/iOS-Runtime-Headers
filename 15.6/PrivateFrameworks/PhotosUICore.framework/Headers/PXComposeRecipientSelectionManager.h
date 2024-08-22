// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCOMPOSERECIPIENTSELECTIONMANAGER_H
#define PXCOMPOSERECIPIENTSELECTIONMANAGER_H

@class NSMutableOrderedSet;
@protocol PXComposeRecipientSelectionManagerDelegate;

#import <Foundation/Foundation.h>

#import "PXComposeRecipientDataSource.h"
#import "PXComposeRecipientSelectionSnapshot.h"

@interface PXComposeRecipientSelectionManager : NSObject {
    NSMutableOrderedSet *_selectedComposeRecipients;
    NSMutableOrderedSet *_selectedRecipients;
}


@property (readonly, nonatomic) PXComposeRecipientDataSource *dataSource; // ivar: _dataSource
@property (weak, nonatomic) NSObject<PXComposeRecipientSelectionManagerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) PXComposeRecipientSelectionSnapshot *selectionSnapshot; // ivar: _selectionSnapshot


-(id)_createComposeRecipientSelectionSnapshotFromCurrentState;
-(id)_setSelectedState:(BOOL)arg0 forComposeRecipients:(id)arg1 ;
-(id)init;
-(id)initWithDataSource:(id)arg0 ;
-(void)_invalidateCurrentSelectionSnapshotWithChangedComposeRecipients:(id)arg0 ;
-(void)selectAll;
-(void)setSelectedState:(BOOL)arg0 atIndex:(NSInteger)arg1 ;


@end


#endif