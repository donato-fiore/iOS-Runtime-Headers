// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WEBCORESHAREDBUFFERRESOURCELOADERDELEGATE_H
#define WEBCORESHAREDBUFFERRESOURCELOADERDELEGATE_H

@class NSData, NSString;
@protocol AVAssetResourceLoaderDelegate;

#import <Foundation/Foundation.h>


@interface WebCoreSharedBufferResourceLoaderDelegate : NSObject <AVAssetResourceLoaderDelegate>

 {
    *void _parent;
    NSInteger _expectedContentSize;
    RetainPtr<NSData> _data;
    BOOL _complete;
    Vector<WTF::RetainPtr<AVAssetResourceLoadingRequest>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> _requests;
    Lock _dataLock;
}


@property (readonly) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canFulfillRequest:(id)arg0 ;
-(BOOL)resourceLoader:(id)arg0 shouldWaitForLoadingOfRequestedResource:(id)arg1 ;
-(id)initWithParent:(*void)arg0 ;
-(void)enqueueRequest:(id)arg0 ;
-(void)fulfillPendingRequests;
-(void)fulfillRequest:(id)arg0 ;
-(void)resourceLoader:(id)arg0 didCancelLoadingRequest:(id)arg1 ;
-(void)setExpectedContentSize:(NSInteger)arg0 ;
-(void)updateData:(id)arg0 complete:(BOOL)arg1 ;


@end


#endif