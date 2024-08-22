// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LIVEFSTHUMBNAILSSERVICESOURCE_H
#define LIVEFSTHUMBNAILSSERVICESOURCE_H

@class QLExternalThumbnailCache, NSString;
@protocol NSFileProviderServiceSource, NSXPCListenerDelegate, QLThumbnailCache;

#import <Foundation/Foundation.h>

#import "LiveFSFPExtensionHelper.h"

@interface LiveFSThumbnailsServiceSource : NSObject <NSFileProviderServiceSource, NSXPCListenerDelegate, QLThumbnailCache>

 {
    LiveFSFPExtensionHelper *ex;
    QLExternalThumbnailCache *thumbnailCache;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isRestricted) BOOL restricted;
@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithFileProviderExtension:(id)arg0 ;
-(id)makeListenerEndpointAndReturnError:(*id)arg0 ;
-(id)thumbnailCache;
-(void)getThumbnailCacheURLWrappersWithCompletion:(id)arg0 ;
-(void)getThumbnailURLForItem:(id)arg0 completion:(id)arg1 ;
-(void)storeThumbnailAtURL:(id)arg0 forItem:(id)arg1 completion:(id)arg2 ;


@end


#endif