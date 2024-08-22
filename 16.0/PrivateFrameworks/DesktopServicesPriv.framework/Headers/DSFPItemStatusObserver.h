// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DSFPITEMSTATUSOBSERVER_H
#define DSFPITEMSTATUSOBSERVER_H

@class FPItemCollection, NSError, NSString;
@protocol FPItemCollectionItemIDBasedDelegate;

#import <Foundation/Foundation.h>


@interface DSFPItemStatusObserver : NSObject <FPItemCollectionItemIDBasedDelegate>

 {
    TNodePtr _parentNode;
    TString _parentIdentifier;
    FPItemCollection *_collection;
    NSError *_FPError;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)fpError;
-(id)fpItems;
-(void)collection:(id)arg0 didEncounterError:(id)arg1 ;
-(void)collection:(id)arg0 didUpdateItems:(id)arg1 replaceItemsByFormerID:(id)arg2 deleteItemsWithIDs:(id)arg3 ;
-(void)collection:(id)arg0 didUpdateObservedItem:(id)arg1 ;
-(void)dataForCollectionShouldBeReloaded:(id)arg0 ;
-(void)resetError;
-(void)startObserving:(id)arg0 forParent:(struct TNodePtr *)arg1 withQueue:(id)arg2 ;
-(void)stopObserving;
-(void)updateFPItems:(id)arg0 ;
-(void)updateNodesFPItemsFromCollection:(*void)arg0 ;


@end


#endif