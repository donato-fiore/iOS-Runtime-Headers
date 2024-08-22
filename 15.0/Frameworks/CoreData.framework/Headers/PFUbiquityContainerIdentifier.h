// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFUBIQUITYCONTAINERIDENTIFIER_H
#define PFUBIQUITYCONTAINERIDENTIFIER_H

@class NSString, NSSet, NSOperationQueue, NSURL;
@protocol NSFilePresenter;

#import <Foundation/Foundation.h>

#import "PFUbiquityLocation.h"

@interface PFUbiquityContainerIdentifier : NSObject <NSFilePresenter>

 {
    NSString *_storeName;
    NSString *_localPeerID;
    PFUbiquityLocation *_ubiquityRootLocation;
    NSString *_uuidString;
    PFUbiquityLocation *_uuidFileLocation;
    BOOL _usedExistingUUIDFile;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *presentedItemURL; // ivar: _presentedItemURL
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithLocalPeerID:(id)arg0 storeName:(id)arg1 andUbiquityRootLocation:(id)arg2 ;
-(void)accommodatePresentedItemDeletionWithCompletionHandler:(id)arg0 ;
-(void)dealloc;


@end


#endif