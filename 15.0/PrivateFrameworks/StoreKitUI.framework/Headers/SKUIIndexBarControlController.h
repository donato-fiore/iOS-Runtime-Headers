// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIINDEXBARCONTROLCONTROLLER_H
#define SKUIINDEXBARCONTROLCONTROLLER_H

@class NSMapTable, NSString;
@protocol SKUIIndexBarControlDataSource, SKUIIndexBarControlDelegate, SKUIIndexBarControlControllerDataSource, SKUIIndexBarControlControllerDelegate;

#import <Foundation/Foundation.h>

#import "SKUIIndexBarEntryDescriptor.h"
#import "SKUIIndexBarControl.h"
#import "SKUIResourceLoader.h"

@interface SKUIIndexBarControlController : NSObject <SKUIIndexBarControlDataSource, SKUIIndexBarControlDelegate>

 {
    SKUIIndexBarEntryDescriptor *_combinedEntryDescriptor;
    NSMapTable *_entryDescriptorToCachedEntry;
    BOOL _hasValidCombinedEntryDescriptor;
    NSMapTable *_indexPathToEntryDescriptor;
    NSMapTable *_requestIDToDescriptors;
    ? _dataSourceDelegateFlags;
}


@property (weak, nonatomic) NSObject<SKUIIndexBarControlControllerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIIndexBarControlControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SKUIIndexBarControl *indexBarControl; // ivar: _indexBarControl
@property (retain, nonatomic) SKUIResourceLoader *resourceLoader; // ivar: _resourceLoader
@property (readonly) Class superclass;


-(NSInteger)indexBarControl:(id)arg0 numberOfEntriesInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInIndexBarControl:(id)arg0 ;
-(id)_URLForEntryDescriptor:(id)arg0 ;
-(id)_cachedEntryForEntryDescriptor:(id)arg0 ;
-(id)_combinedEntryDescriptor;
-(id)_entryDescriptorAtIndexPath:(id)arg0 ;
-(id)_entryForEntryDescriptor:(id)arg0 loadingIfNeeded:(BOOL)arg1 ;
-(id)_placeholderEntryForEntryDescriptor:(id)arg0 ;
-(id)combinedEntryForIndexBarControl:(id)arg0 ;
-(id)indexBarControl:(id)arg0 entryAtIndexPath:(id)arg1 ;
-(id)init;
-(id)initWithIndexBarControl:(id)arg0 ;
-(void)_artworkRequestDidLoadImageNotification:(id)arg0 ;
-(void)_cancelLoadForEntryDescriptors:(id)arg0 ;
-(void)_configureEntry:(id)arg0 withEntryDescriptor:(id)arg1 ;
-(void)_finishLoadForRequestID:(id)arg0 withResultingImage:(id)arg1 ;
-(void)_loadEntryForEntryDescriptor:(id)arg0 ;
-(void)_updateCachedEntry:(id)arg0 forEntryDescriptor:(id)arg1 ;
-(void)dealloc;
-(void)indexBarControl:(id)arg0 didSelectEntryAtIndexPath:(id)arg1 ;
-(void)indexBarControlDidSelectBeyondBottom:(id)arg0 ;
-(void)indexBarControlDidSelectBeyondTop:(id)arg0 ;
-(void)reloadCombinedEntryDescriptor;
-(void)reloadData;
-(void)reloadEntryDescriptorAtIndexPath:(id)arg0 ;
-(void)reloadSections:(id)arg0 ;


@end


#endif