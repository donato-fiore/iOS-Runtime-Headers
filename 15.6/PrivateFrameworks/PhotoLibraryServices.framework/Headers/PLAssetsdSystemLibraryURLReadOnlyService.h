// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLASSETSDSYSTEMLIBRARYURLREADONLYSERVICE_H
#define PLASSETSDSYSTEMLIBRARYURLREADONLYSERVICE_H

@class NSString;
@protocol PLAssetsdSystemLibraryURLReadOnlyServiceProtocol;

#import <Foundation/Foundation.h>

#import "PLAssetsdConnectionAuthorization.h"

@interface PLAssetsdSystemLibraryURLReadOnlyService : NSObject <PLAssetsdSystemLibraryURLReadOnlyServiceProtocol>

 {
    PLAssetsdConnectionAuthorization *_connectionAuthorization;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithConnectionAuthorization:(id)arg0 ;
-(void)systemPhotoLibraryURL:(id)arg0 ;


@end


#endif