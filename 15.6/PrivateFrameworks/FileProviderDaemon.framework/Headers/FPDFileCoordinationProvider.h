// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FPDFILECOORDINATIONPROVIDER_H
#define FPDFILECOORDINATIONPROVIDER_H

@class NSURL, NSString, NSOperationQueue;
@protocol NSFileProvider, FPDFileCoordinationProviderDelegate;

#import <Foundation/Foundation.h>


@interface FPDFileCoordinationProvider : NSObject <NSFileProvider>

 {
    NSURL *_providedItemsURL;
}


@property (readonly, copy) NSString *_fileReactorID;
@property (readonly) NSOperationQueue *_providedItemsOperationQueue;
@property (readonly, copy) NSURL *_providedItemsURL;
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<FPDFileCoordinationProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy) NSString *extensionIdentifier; // ivar: _extensionIdentifier
@property (readonly) NSUInteger hash;
@property (getter=isRegistered) BOOL registered; // ivar: _registered
@property (readonly) Class superclass;


-(id)_physicalURLForURL:(id)arg0 ;
-(id)delegateForURL:(id)arg0 ;
-(id)initWithRootURL:(id)arg0 ;
-(void)_cancelProvidingItemAtURL:(id)arg0 toReaderWithID:(id)arg1 ;
-(void)_movingItemAtURL:(id)arg0 requiresProvidingWithDestinationURL:(id)arg1 completionHandler:(id)arg2 ;
-(void)_provideItemAtURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)_provideItemAtURL:(id)arg0 toReaderWithID:(id)arg1 completionHandler:(id)arg2 ;
-(void)_providedItemAtURL:(id)arg0 didGainPresenterWithID:(id)arg1 ;
-(void)_providedItemAtURL:(id)arg0 didLosePresenterWithID:(id)arg1 ;
-(void)_providedItemAtURL:(id)arg0 withPresenterWithID:(id)arg1 didMoveToURL:(id)arg2 ;
-(void)_writerWithID:(id)arg0 didFinishWritingForURL:(id)arg1 ;


@end


#endif