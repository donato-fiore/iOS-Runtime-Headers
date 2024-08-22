// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FPXITEMSOBSERVER_H
#define FPXITEMSOBSERVER_H

@class NSMutableArray, NSString, NSData;
@protocol NSFileProviderEnumerationObserver;


#import "FPXObserver.h"

@interface FPXItemsObserver : FPXObserver <NSFileProviderEnumerationObserver>

 {
    NSMutableArray *_items;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) id *finishedBlock; // ivar: _finishedBlock
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger suggestedPageSize; // ivar: _suggestedPageSize
@property (readonly) Class superclass;
@property (copy) NSData *syncAnchor; // ivar: _syncAnchor


-(id)initWithObservedItemID:(id)arg0 domainContext:(id)arg1 nsFileProviderRequest:(id)arg2 ;
-(void)didEnumerateItems:(id)arg0 ;
-(void)finishEnumeratingUpToPage:(id)arg0 ;
-(void)finishEnumeratingWithError:(id)arg0 ;


@end


#endif