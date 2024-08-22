// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLLIBRARY_H
#define BLLIBRARY_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "IMLibraryPlist.h"

@interface BLLibrary : NSObject

@property (retain, nonatomic) IMLibraryPlist *booksPlist; // ivar: _booksPlist
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (retain, nonatomic) IMLibraryPlist *managedPlist; // ivar: _managedPlist
@property (retain, nonatomic) IMLibraryPlist *purchasedPlist; // ivar: _purchasedPlist
@property (retain, nonatomic) IMLibraryPlist *sharedPlist; // ivar: _sharedPlist


+(BOOL)_addDate:(id)arg0 toPlist:(id)arg1 bookItem:(id)arg2 error:(*id)arg3 ;
+(id)_bookItemsFromPlist:(id)arg0 sharedPlist:(id)arg1 ;
+(id)defaultBookLibrary;
+(void)initialize;
-(BOOL)_addBookItemToEduContainer:(id)arg0 error:(*id)arg1 ;
-(BOOL)_addSharedBookToPurchasesPlistWithPermlink:(id)arg0 error:(*id)arg1 ;
-(BOOL)_bookItemIsShared:(id)arg0 ;
-(BOOL)_isMultiUser;
-(BOOL)_isShareableBook:(id)arg0 ;
-(BOOL)_removeBookFromLibraryWithPath:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeBookFromLibraryWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)_allPlists;
-(id)_bookItemFromPermlink:(id)arg0 error:(*id)arg1 ;
-(id)_bookItemFromStoreID:(id)arg0 permlink:(id)arg1 error:(*id)arg2 ;
-(id)_bookItemsFromPlist:(id)arg0 ;
// -(id)_findBookItemWithTestBlock:(id)arg0 foundWhere:(unk)arg1  ;
-(id)_init;
-(id)_initWithBooksPlist:(id)arg0 purchasedPlist:(id)arg1 managedPlist:(id)arg2 sharedPlist:(id)arg3 ;
-(id)_list:(id)arg0 testBlock:(id)arg1 ;
-(id)_lookupBookItemExhaustiveFromPermlink:(id)arg0 error:(*id)arg1 ;
-(id)_perUserBookURLForBookURL:(id)arg0 ;
-(id)allBookItems;
-(id)bookIdentifierFromURL:(id)arg0 error:(*id)arg1 ;
-(void)_bookWasOpenedWithStoreID:(id)arg0 permlink:(id)arg1 date:(id)arg2 ;
-(void)_downloadWithPermalink:(id)arg0 title:(id)arg1 result:(id)arg2 ;
-(void)addITunesUBookToLibraryWithPermlink:(id)arg0 title:(id)arg1 result:(id)arg2 ;


@end


#endif