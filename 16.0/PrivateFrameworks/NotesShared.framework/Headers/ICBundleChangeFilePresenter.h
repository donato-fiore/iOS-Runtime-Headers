// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICBUNDLECHANGEFILEPRESENTER_H
#define ICBUNDLECHANGEFILEPRESENTER_H

@class ICSelectorDelayer, NSString, NSManagedObjectContext, NSManagedObjectID, NSSet, NSOperationQueue, NSURL;
@protocol NSFilePresenter;

#import <Foundation/Foundation.h>


@interface ICBundleChangeFilePresenter : NSObject <NSFilePresenter>



@property (retain, nonatomic) ICSelectorDelayer *applyChangesSelectorDelayer; // ivar: _applyChangesSelectorDelayer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext; // ivar: _managedObjectContext
@property (copy, nonatomic) NSManagedObjectID *objectID; // ivar: _objectID
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (retain, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (copy, nonatomic) id *presentedItemDidApplyChanges; // ivar: _presentedItemDidApplyChanges
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSURL *url; // ivar: _url


-(id)initWithObjectID:(id)arg0 url:(id)arg1 managedObjectContext:(id)arg2 ;
-(void)applyChanges;
-(void)presentedItemDidChange;


@end


#endif