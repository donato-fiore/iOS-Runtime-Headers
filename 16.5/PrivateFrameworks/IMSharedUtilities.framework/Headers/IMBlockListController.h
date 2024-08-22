// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMBLOCKLISTCONTROLLER_H
#define IMBLOCKLISTCONTROLLER_H

@class NSOrderedSet;

#import <Foundation/Foundation.h>


@interface IMBlockListController : NSObject

@property (retain, nonatomic) id *cmfBlockListUpdatedObserver; // ivar: _cmfBlockListUpdatedObserver
@property (retain, nonatomic) id *cnDatabaseChangedExternallyObserver; // ivar: _cnDatabaseChangedExternallyObserver
@property (retain, nonatomic) NSOrderedSet *imBlockItemList; // ivar: _imBlockItemList


+(*void)_createCMFItemRefWithUnsanitizedAddress:(id)arg0 ;
+(id)sharedBlockList;
-(BOOL)_blockCMFItemRef:(*void)arg0 ;
-(BOOL)addressIsBlocked:(id)arg0 ;
-(BOOL)blockAddress:(id)arg0 ;
-(BOOL)blockItem:(id)arg0 ;
-(BOOL)itemIsBlocked:(id)arg0 ;
-(id)_addressForCMItemRef:(*void)arg0 ;
-(id)blockListItems;
-(id)init;
-(void)_buildBlockList;
-(void)_unblockCMFItem:(*void)arg0 ;
-(void)dealloc;
-(void)listenToCNNotifications;
-(void)removeCNNotifications;
-(void)unblockAddress:(id)arg0 ;
-(void)unblockItem:(id)arg0 ;


@end


#endif