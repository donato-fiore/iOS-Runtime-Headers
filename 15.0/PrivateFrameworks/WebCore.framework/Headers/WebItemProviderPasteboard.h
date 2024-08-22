// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WEBITEMPROVIDERPASTEBOARD_H
#define WEBITEMPROVIDERPASTEBOARD_H

@class NSArray, NSString;
@protocol AbstractPasteboard;

#import <Foundation/Foundation.h>


@interface WebItemProviderPasteboard : NSObject <AbstractPasteboard>

 {
    RetainPtr<NSArray> _itemProviders;
    RetainPtr<NSArray> _supportedTypeIdentifiers;
    RetainPtr<NSArray<WebItemProviderRegistrationInfoList *>> _stagedRegistrationInfoLists;
    Vector<WTF::RetainPtr<WebItemProviderLoadResult>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> _loadResults;
}


@property (readonly, nonatomic) NSArray *allDroppedFileURLs;
@property (nonatomic) NSInteger changeCount; // ivar: _changeCount
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasPendingOperation;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *itemProviders;
@property (readonly, nonatomic) NSInteger numberOfFiles;
@property (nonatomic) NSInteger numberOfItems; // ivar: _numberOfItems
@property (nonatomic) NSInteger pendingOperationCount; // ivar: _pendingOperationCount
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)_preLoadedDataConformingToType:(id)arg0 forItemProviderAtIndex:(NSUInteger)arg1 ;
-(id)dataForPasteboardType:(id)arg0 ;
-(id)dataForPasteboardType:(id)arg0 inItemSet:(id)arg1 ;
-(id)fileUploadURLsAtIndex:(NSUInteger)arg0 fileTypes:(*id)arg1 ;
-(id)init;
-(id)itemProviderAtIndex:(NSUInteger)arg0 ;
-(id)pasteboardTypes;
-(id)takeRegistrationLists;
-(id)typeIdentifiersToLoad:(id)arg0 ;
-(id)valuesForPasteboardType:(id)arg0 inItemSet:(id)arg1 ;
-(void)clearRegistrationLists;
-(void)decrementPendingOperationCount;
-(void)doAfterLoadingProvidedContentIntoFileURLs:(id)arg0 ;
// -(void)doAfterLoadingProvidedContentIntoFileURLs:(id)arg0 synchronousTimeout:(unk)arg1  ;
-(void)enumerateItemProvidersWithBlock:(id)arg0 ;
-(void)incrementPendingOperationCount;
-(void)stageRegistrationLists:(id)arg0 ;
-(void)updateSupportedTypeIdentifiers:(id)arg0 ;


@end


#endif