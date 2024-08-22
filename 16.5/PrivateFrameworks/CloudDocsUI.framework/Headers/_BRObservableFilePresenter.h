// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _BROBSERVABLEFILEPRESENTER_H
#define _BROBSERVABLEFILEPRESENTER_H

@class NSString, NSSet, NSOperationQueue, NSURL;
@protocol NSFilePresenter;

#import <Foundation/Foundation.h>

#import "BRObservableFile.h"

@interface _BRObservableFilePresenter : NSObject <NSFilePresenter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (weak, nonatomic) BRObservableFile *parent; // ivar: _parent
@property (retain) NSOperationQueue *presentedItemOperationQueue; // ivar: _presentedItemOperationQueue
@property (copy) NSURL *presentedItemURL; // ivar: _presentedItemURL
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) Class superclass;


-(void)accommodatePresentedItemDeletionWithCompletionHandler:(id)arg0 ;
-(void)presentedItemDidChange;
-(void)presentedItemDidMoveToURL:(id)arg0 ;
-(void)presentedItemUbiquityDidChange;


@end


#endif