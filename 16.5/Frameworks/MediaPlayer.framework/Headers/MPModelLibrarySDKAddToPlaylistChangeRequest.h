// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPMODELLIBRARYSDKADDTOPLAYLISTCHANGEREQUEST_H
#define MPMODELLIBRARYSDKADDTOPLAYLISTCHANGEREQUEST_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MPModelPlaylist.h"

@interface MPModelLibrarySDKAddToPlaylistChangeRequest : NSObject <NSCopying>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, nonatomic) BOOL isCloudID; // ivar: _isCloudID
@property (retain, nonatomic) MPModelPlaylist *playlist; // ivar: _playlist
@property (readonly, copy, nonatomic) NSString *productID; // ivar: _productID


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithProductID:(id)arg0 isCloudID:(BOOL)arg1 playlist:(id)arg2 completionHandler:(id)arg3 ;
-(id)newOperationWithResponseHandler:(id)arg0 ;


@end


#endif