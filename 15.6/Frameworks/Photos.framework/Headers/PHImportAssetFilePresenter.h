// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHIMPORTASSETFILEPRESENTER_H
#define PHIMPORTASSETFILEPRESENTER_H

@class NSString, NSSet, NSOperationQueue, NSURL;
@protocol NSFilePresenter;

#import <Foundation/Foundation.h>


@interface PHImportAssetFilePresenter : NSObject <NSFilePresenter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue; // ivar: _presentedItemOperationQueue
@property (readonly, copy) NSURL *presentedItemURL; // ivar: _presentedItemURL
@property (readonly, copy) NSURL *primaryPresentedItemURL; // ivar: _primaryPresentedItemURL
@property (readonly) Class superclass;


-(id)initWithPrimaryURL:(id)arg0 presentedURL:(id)arg1 ;


@end


#endif