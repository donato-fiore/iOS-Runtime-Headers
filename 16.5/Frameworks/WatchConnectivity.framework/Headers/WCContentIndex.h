// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WCCONTENTINDEX_H
#define WCCONTENTINDEX_H

@class NSMutableArray, NSString, NSArray, NSURL, NSSet, NSOperationQueue;
@protocol NSFilePresenter;

#import <Foundation/Foundation.h>


@interface WCContentIndex : NSObject <NSFilePresenter>



@property (retain, nonatomic) NSMutableArray *cachedContentIndex; // ivar: _cachedContentIndex
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *index;
@property (nonatomic) BOOL invalidated; // ivar: _invalidated
@property (retain, nonatomic) NSURL *itemURL; // ivar: _itemURL
@property (retain, nonatomic) id *lastGenerationIdentifier; // ivar: _lastGenerationIdentifier
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (retain, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithContainingFolder:(id)arg0 ;
-(void)addContentIdentifier:(id)arg0 ;
-(void)commit;
-(void)invalidate;
-(void)loadContentIfNecessary;
-(void)presentedItemDidChange;
-(void)presentedItemDidMoveToURL:(id)arg0 ;
-(void)removeContentIdentifier:(id)arg0 ;


@end


#endif