// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPDITEMITERATOR_H
#define FPDITEMITERATOR_H

@class FPItem, NSError, NSMutableArray, NSString;
@protocol FPXEnumeratorObserver, FPDLifetimeExtender, OS_dispatch_queue;


#import "FPDIterator.h"
#import "FPDExtension.h"
#import "FPDDomain.h"

@interface FPDItemIterator : FPDIterator <FPXEnumeratorObserver, FPDLifetimeExtender>

 {
    NSObject<OS_dispatch_queue> *_queue;
    FPItem *_current;
    NSUInteger _numFoldersPoped;
    BOOL _done;
    NSError *_error;
    NSMutableArray *_enumeratorByDepth;
    NSMutableArray *_remainingItemsByDepth;
    FPDExtension *_provider;
    FPDDomain *_domain;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSString *prettyDescription;
@property (readonly) int requestEffectivePID;
@property (readonly) Class superclass;
@property (readonly) CGFloat timeout;
@property NSUInteger timeoutState;


-(BOOL)_createEnumerator;
-(BOOL)_enumerateMoreItems;
-(BOOL)_shouldTraverseSubTree:(id)arg0 ;
-(BOOL)done;
-(NSUInteger)numFoldersPopped;
-(id)_popItem;
-(id)error;
-(id)initWithItem:(id)arg0 provider:(id)arg1 ;
-(id)nextWithError:(*id)arg0 ;
-(void)_decorateItem:(id)arg0 ;
-(void)_invalidateWithError:(id)arg0 ;
-(void)_next;
-(void)_popFolder;
-(void)_pushFolder:(id)arg0 ;
-(void)dealloc;
-(void)didUpdateItem:(id)arg0 ;
-(void)enumerationResultsDidChange;


@end


#endif