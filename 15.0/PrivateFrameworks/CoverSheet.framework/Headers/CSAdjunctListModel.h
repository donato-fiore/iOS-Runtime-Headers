// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSADJUNCTLISTMODEL_H
#define CSADJUNCTLISTMODEL_H

@class NSMutableDictionary, NSMutableSet, NSString;
@protocol CSItemDestination, CSAdjunctListModelDelegate;

#import <Foundation/Foundation.h>


@interface CSAdjunctListModel : NSObject <CSItemDestination>

 {
    NSMutableDictionary *_identifiersToItems;
    NSMutableSet *_pendingItems;
    BOOL _suspended;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CSAdjunctListModelDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)_reallyAddOrUpdateItem:(id)arg0 ;
-(void)_replayPendingChanges;
-(void)addOrUpdateItem:(id)arg0 ;
-(void)removeItemForIdentifier:(id)arg0 ;
-(void)resumeItemHandling;
-(void)suspendItemHandling;


@end


#endif