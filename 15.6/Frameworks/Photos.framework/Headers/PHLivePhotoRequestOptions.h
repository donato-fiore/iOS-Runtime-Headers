// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHLIVEPHOTOREQUESTOPTIONS_H
#define PHLIVEPHOTOREQUESTOPTIONS_H

@class NSString;
@protocol PHMediaRequestLiveRenderingOptions, PHMediaRequestThreadingOptions, NSCopying;

#import <Foundation/Foundation.h>


@interface PHLivePhotoRequestOptions : NSObject <PHMediaRequestLiveRenderingOptions, PHMediaRequestThreadingOptions, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSInteger deliveryMode; // ivar: _deliveryMode
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger downloadIntent; // ivar: _downloadIntent
@property (nonatomic) NSInteger downloadPriority; // ivar: _downloadPriority
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL liveRenderVideoIfNeeded; // ivar: _liveRenderVideoIfNeeded
@property (nonatomic, getter=isNetworkAccessAllowed) BOOL networkAccessAllowed; // ivar: _networkAccessAllowed
@property (readonly, copy, nonatomic) id *progressHandler;
@property (copy, nonatomic) id *progressHandler; // ivar: _progressHandler
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger version; // ivar: _version


-(BOOL)isCurrentVersion;
-(BOOL)isSynchronous;
-(BOOL)liveRenderAndOnDemandRenderVideoConcurrently;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)renderResultHandlerQueue;
-(id)resultHandlerQueue;


@end


#endif