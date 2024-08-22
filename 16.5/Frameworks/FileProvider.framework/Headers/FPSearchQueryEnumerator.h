// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPSEARCHQUERYENUMERATOR_H
#define FPSEARCHQUERYENUMERATOR_H

@class NSString, CSSearchQuery;
@protocol NSFileProviderEnumerator;

#import <Foundation/Foundation.h>

#import "NSFileProviderSearchQuery.h"

@interface FPSearchQueryEnumerator : NSObject <NSFileProviderEnumerator>

 {
    NSFileProviderSearchQuery *_fileProviderSearchQuery;
    NSString *_mountPoint;
    CSSearchQuery *_searchQuery;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_createSearchQuery;
-(id)_fpItemsFromSearchableItems:(id)arg0 ;
-(id)initWithSearchQuery:(id)arg0 mountPoint:(id)arg1 ;
-(void)_gatherItemsWithCompletionBlock:(id)arg0 ;
-(void)enumerateItemsForObserver:(id)arg0 startingAtPage:(id)arg1 ;
-(void)invalidate;


@end


#endif