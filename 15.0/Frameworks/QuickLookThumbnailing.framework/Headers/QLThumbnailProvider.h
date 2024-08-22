// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QLTHUMBNAILPROVIDER_H
#define QLTHUMBNAILPROVIDER_H

@class NSString;
@protocol NSExtensionRequestHandling;

#import <Foundation/Foundation.h>


@interface QLThumbnailProvider : NSObject <NSExtensionRequestHandling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)beginRequestWithExtensionContext:(id)arg0 ;
-(void)provideThumbnailForFileRequest:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif