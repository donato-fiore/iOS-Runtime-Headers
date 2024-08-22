// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICTHUMBNAILSERVICE_H
#define ICTHUMBNAILSERVICE_H

@class NSMutableDictionary, NSString, NSOperationQueue, NSManagedObjectContext;
@protocol ICManagedObjectContextChangeControllerDelegate, OS_dispatch_queue, ICThumbnailCaching;

#import <Foundation/Foundation.h>

#import "ICManagedObjectContextChangeController.h"

@interface ICThumbnailService : NSObject <ICManagedObjectContextChangeControllerDelegate>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundQueue; // ivar: _backgroundQueue
@property (readonly, nonatomic) NSObject<ICThumbnailCaching> *cache; // ivar: _cache
@property (retain, nonatomic) NSMutableDictionary *callbacks; // ivar: _callbacks
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) ICManagedObjectContextChangeController *managedObjectChangeController; // ivar: _managedObjectChangeController
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *schedulingSerialQueue; // ivar: _schedulingSerialQueue
@property (readonly) Class superclass;
@property (retain, nonatomic) NSOperationQueue *thumbnailGenerationQueue; // ivar: _thumbnailGenerationQueue
@property (readonly, nonatomic) NSManagedObjectContext *viewContext; // ivar: _viewContext
@property (readonly, nonatomic) NSManagedObjectContext *workerContext; // ivar: _workerContext


+(id)sharedThumbnailService;
-(BOOL)managedObjectContextChangeControllerShouldUpdateImmediately:(id)arg0 ;
-(id)init;
-(id)initWithViewContext:(id)arg0 workerContext:(id)arg1 ;
-(id)managedObjectContextChangeController:(id)arg0 managedObjectIDsToUpdateForUpdatedManagedObjects:(id)arg1 ;
-(id)thumbnailGeneratorForConfiguration:(id)arg0 ;
-(id)thumbnailWithConfiguration:(id)arg0 ;
-(void)attachmentPreviewImagesDidUpdate:(id)arg0 ;
-(void)dealloc;
-(void)managedObjectContextChangeController:(id)arg0 performUpdatesForManagedObjectIDs:(id)arg1 ;
-(void)processThumbnailDescriptionResult:(id)arg0 ;
-(void)thumbnailWithConfiguration:(id)arg0 completion:(id)arg1 ;
-(void)thumbnailsWithConfigurations:(id)arg0 completion:(id)arg1 ;


@end


#endif