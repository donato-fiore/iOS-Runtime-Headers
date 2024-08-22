// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICBUNDLECONTAINERFILEPRESENTER_H
#define ICBUNDLECONTAINERFILEPRESENTER_H

@class NSString, NSSet, NSOperationQueue, NSURL;
@protocol NSFilePresenter;

#import <Foundation/Foundation.h>


@interface ICBundleContainerFilePresenter : NSObject <NSFilePresenter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (retain, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (copy, nonatomic) id *subitemBundleDidChange; // ivar: _subitemBundleDidChange
@property (readonly) Class superclass;
@property (copy, nonatomic) NSURL *url; // ivar: _url


-(id)initWithURL:(id)arg0 ;
-(void)presentedSubitemDidChangeAtURL:(id)arg0 ;


@end


#endif