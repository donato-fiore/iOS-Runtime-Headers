// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIARTWORKITEMPROVIDER_H
#define SKUIARTWORKITEMPROVIDER_H

@class NSItemProvider, NSMutableArray, NSString, NSData, NSProgress, NSURL;
@protocol SKUIArtworkRequestDelegate;


#import "SKUIResourceLoader.h"

@interface SKUIArtworkItemProvider : NSItemProvider <SKUIArtworkRequestDelegate>



@property (retain, nonatomic) NSMutableArray *completionHandlers; // ivar: _completionHandlers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSData *imageData; // ivar: _imageData
@property (retain, nonatomic) NSProgress *progress; // ivar: _progress
@property (retain, nonatomic) SKUIResourceLoader *resourceLoader; // ivar: _resourceLoader
@property (readonly) Class superclass;
@property (retain, nonatomic) NSURL *url; // ivar: _url


-(id)initWithURL:(id)arg0 usingResourceLoader:(id)arg1 ;
-(id)loadDataRepresentationForTypeIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)artworkRequest:(id)arg0 didLoadImage:(id)arg1 ;


@end


#endif