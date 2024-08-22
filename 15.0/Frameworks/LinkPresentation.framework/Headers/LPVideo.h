// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LPVIDEO_H
#define LPVIDEO_H

@class NSData, NSItemProvider, AVURLAsset, NSString, AVAsset, NSURL;
@protocol AVAssetResourceLoaderDelegate, LPAsynchronousResource, NSSecureCoding, OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "LPVideo.h"
#import "LPVideoProperties.h"

@interface LPVideo : NSObject <AVAssetResourceLoaderDelegate, LPAsynchronousResource, NSSecureCoding>

 {
    NSData *_data;
    NSObject<OS_dispatch_queue> *_mediaLoadingQueue;
    NSItemProvider *_itemProvider;
    LPVideo *_videoLoadedFromItemProvider;
    NSObject<OS_dispatch_group> *_itemProviderLoadGroup;
    CGSize _intrinsicSize;
    BOOL _startedFetchingIntrinsicSize;
    AVURLAsset *_asset;
    id *_mediaServicesResetNotificationHandler;
    LPVideoProperties *_properties;
}


@property (readonly, copy, nonatomic) NSString *MIMEType; // ivar: _MIMEType
@property (readonly, nonatomic) AVAsset *_asset;
@property (readonly, nonatomic) NSUInteger _encodedSize;
@property (readonly, retain, nonatomic) NSItemProvider *_itemProvider;
@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (readonly, nonatomic) BOOL hasAudio;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) LPVideoProperties *properties;
@property (readonly, retain, nonatomic) NSURL *streamingURL; // ivar: _streamingURL
@property (readonly) Class superclass;
@property (readonly, retain, nonatomic) NSURL *youTubeURL; // ivar: _youTubeURL


+(BOOL)supportsSecureCoding;
-(BOOL)_isSubstitute;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)needsAsynchronousLoad;
-(BOOL)resourceLoader:(id)arg0 shouldWaitForLoadingOfRequestedResource:(id)arg1 ;
-(id)_initWithVideo:(id)arg0 ;
-(id)init;
-(id)initByReferencingFileURL:(id)arg0 MIMEType:(id)arg1 hasAudio:(BOOL)arg2 ;
-(id)initByReferencingFileURL:(id)arg0 MIMEType:(id)arg1 properties:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 MIMEType:(id)arg1 hasAudio:(BOOL)arg2 ;
-(id)initWithData:(id)arg0 MIMEType:(id)arg1 properties:(id)arg2 ;
-(id)initWithItemProvider:(id)arg0 properties:(id)arg1 ;
-(id)initWithStreamingURL:(id)arg0 hasAudio:(BOOL)arg1 ;
-(id)initWithStreamingURL:(id)arg0 properties:(id)arg1 ;
-(id)initWithYouTubeURL:(id)arg0 ;
-(id)initWithYouTubeURL:(id)arg0 properties:(id)arg1 ;
-(struct CGSize )_intrinsicSizeIfKnown;
-(void)_installMediaServicesResetNotificationHandler;
-(void)_intrinsicSizeWithCompletionHandler:(id)arg0 ;
-(void)_mapDataFromFileURL;
-(void)_uninstallMediaServicesResetNotificationHandler;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)loadAsynchronouslyWithCompletionHandler:(id)arg0 ;


@end


#endif