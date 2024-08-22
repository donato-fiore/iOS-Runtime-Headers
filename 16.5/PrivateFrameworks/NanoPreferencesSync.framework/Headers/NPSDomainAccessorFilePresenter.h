// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPSDOMAINACCESSORFILEPRESENTER_H
#define NPSDOMAINACCESSORFILEPRESENTER_H

@class NSString, NSURL, NSSet, NSOperationQueue;
@protocol NSFilePresenter, NPSDomainAccessorFilePresenterDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NPSDomainAccessorFilePresenter : NSObject <NSFilePresenter>



@property (nonatomic, getter=isCurrent) BOOL current; // ivar: _current
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<NPSDomainAccessorFilePresenterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSURL *domainURL; // ivar: _domainURL
@property (readonly) NSUInteger hash;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *presentedItemURL;
@property (retain, nonatomic) NSOperationQueue *presenterOperationQueue; // ivar: _presenterOperationQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *presenterUnderlyingQueue; // ivar: _presenterUnderlyingQueue
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) Class superclass;


-(BOOL)presentedItemNeedsWatching;
-(id)initWithDelegate:(id)arg0 domainURL:(id)arg1 ;
-(id)synchronizeForReadingOnly:(BOOL)arg0 handler:(id)arg1 ;
-(void)dealloc;
-(void)relinquishPresentedItemToWriter:(id)arg0 ;


@end


#endif