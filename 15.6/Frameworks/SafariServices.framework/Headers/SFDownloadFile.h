// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFDOWNLOADFILE_H
#define SFDOWNLOADFILE_H

@class NSURL, NSData, NSString, NSSet, NSOperationQueue;
@protocol NSFilePresenter, SFDownloadFileDelegate;

#import <Foundation/Foundation.h>


@interface SFDownloadFile : NSObject <NSFilePresenter>

 {
    BOOL _invalidated;
    BOOL _usingSecurityScopedURL;
    BOOL _suspended;
}


@property (readonly, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) NSData *bookmarkData; // ivar: _bookmarkData
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SFDownloadFileDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) Class superclass;


-(id)initWithBookmarkData:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)initWithURL:(id)arg0 bookmarkData:(id)arg1 ;
-(void)_resume;
-(void)_suspend;
-(void)accommodatePresentedItemDeletionWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)presentedItemDidChange;
-(void)presentedItemDidMoveToURL:(id)arg0 ;


@end


#endif