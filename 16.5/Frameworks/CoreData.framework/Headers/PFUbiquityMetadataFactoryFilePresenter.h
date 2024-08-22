// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFUBIQUITYMETADATAFACTORYFILEPRESENTER_H
#define PFUBIQUITYMETADATAFACTORYFILEPRESENTER_H

@class NSString, NSSet, NSOperationQueue, NSURL;
@protocol NSFilePresenter;

#import <Foundation/Foundation.h>

#import "PFUbiquityLocation.h"

@interface PFUbiquityMetadataFactoryFilePresenter : NSObject <NSFilePresenter>

 {
    PFUbiquityLocation *_presentedItemLocation;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *presentedItemURL; // ivar: _presentedItemURL
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) Class superclass;


+(void)initialize;
-(id)init;
-(id)initWithMetadataStoreFileLocation:(id)arg0 ;
-(void)accommodatePresentedItemDeletionWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)relinquishPresentedItemToReader:(id)arg0 ;
-(void)relinquishPresentedItemToWriter:(id)arg0 ;
-(void)savePresentedItemChangesWithCompletionHandler:(id)arg0 ;


@end


#endif