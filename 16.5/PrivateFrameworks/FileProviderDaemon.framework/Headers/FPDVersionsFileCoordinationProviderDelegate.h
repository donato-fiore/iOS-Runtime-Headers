// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPDVERSIONSFILECOORDINATIONPROVIDERDELEGATE_H
#define FPDVERSIONSFILECOORDINATIONPROVIDERDELEGATE_H

@protocol FPDFileCoordinationProviderDelegate;

#import <Foundation/Foundation.h>

#import "FPDExtensionManager.h"

@interface FPDVersionsFileCoordinationProviderDelegate : NSObject <FPDFileCoordinationProviderDelegate>

 {
    FPDExtensionManager *_extensionManager;
}




-(id)_fileReactorID;
-(id)_physicalURLForURL:(id)arg0 ;
-(id)_providedItemsOperationQueue;
-(id)_siblingDelegateForURL:(id)arg0 ;
-(id)initWithExtensionManager:(id)arg0 ;
-(void)_cancelProvidingItemAtURL:(id)arg0 toReaderWithID:(id)arg1 ;
-(void)_movingItemAtURL:(id)arg0 requiresProvidingWithDestinationURL:(id)arg1 completionHandler:(id)arg2 ;
-(void)_provideItemAtURL:(id)arg0 withInfo:(id)arg1 completionHandler:(id)arg2 ;
-(void)_providedItemAtURL:(id)arg0 didGainPresenterWithID:(id)arg1 ;
-(void)_providedItemAtURL:(id)arg0 didLosePresenterWithID:(id)arg1 ;
-(void)_providedItemAtURL:(id)arg0 withPresenterWithID:(id)arg1 didMoveToURL:(id)arg2 ;
-(void)_writerWithID:(id)arg0 didFinishWritingForURL:(id)arg1 ;


@end


#endif