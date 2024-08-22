// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMDPHOTOSSYNDICATIONLIBRARYCHANGELISTENER_H
#define IMDPHOTOSSYNDICATIONLIBRARYCHANGELISTENER_H

@class PHFetchOptions, NSString, PHPhotoLibrary;
@protocol PHPhotoLibraryChangeObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface IMDPhotosSyndicationLibraryChangeListener : NSObject <PHPhotoLibraryChangeObserver>



@property (readonly, nonatomic) PHFetchOptions *analysisFetchOptions; // ivar: _analysisFetchOptions
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *changeObservationQueue; // ivar: _changeObservationQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PHPhotoLibrary *syndicationLibrary; // ivar: _syndicationLibrary


+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)photoLibraryDidChange:(id)arg0 ;
-(void)startListening;
-(void)stopListening;


@end


#endif