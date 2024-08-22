// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCFILECOORDINATEDDICTIONARY_H
#define FCFILECOORDINATEDDICTIONARY_H

@class NSOperationQueue, NSSet, NSString, NSURL;
@protocol NSFilePresenter;

#import <Foundation/Foundation.h>

#import "FCAsyncSerialQueue.h"

@interface FCFileCoordinatedDictionary : NSObject <NSFilePresenter>



@property (readonly, nonatomic) NSOperationQueue *accessQueue; // ivar: _accessQueue
@property (readonly, nonatomic) FCAsyncSerialQueue *accessSynchronizationQueue; // ivar: _accessSynchronizationQueue
@property (readonly, copy, nonatomic) NSSet *allowedClasses; // ivar: _allowedClasses
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (readonly) NSUInteger hash;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue; // ivar: _presentedItemOperationQueue
@property (readonly, copy) NSURL *presentedItemURL; // ivar: _presentedItemURL
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithFileURL:(id)arg0 allowedClasses:(id)arg1 ;
-(void)readWithAccessor:(id)arg0 ;
// -(void)writeWithAccessor:(id)arg0 completion:(unk)arg1  ;


@end


#endif