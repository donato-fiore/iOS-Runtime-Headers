// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKNETWORKIMAGESPECIFIER_H
#define CKNETWORKIMAGESPECIFIER_H

@class UIImage, NSURL;
@protocol CKNetworkImageDownloading;

#import <Foundation/Foundation.h>


@interface CKNetworkImageSpecifier : NSObject

@property (readonly, nonatomic) CGRect cropRect; // ivar: _cropRect
@property (readonly, nonatomic) UIImage *defaultImage; // ivar: _defaultImage
@property (readonly, nonatomic) NSObject<CKNetworkImageDownloading> *imageDownloader; // ivar: _imageDownloader
@property (readonly, nonatomic) id *scenePath; // ivar: _scenePath
@property (readonly, copy, nonatomic) NSURL *url; // ivar: _url


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithURL:(id)arg0 defaultImage:(id)arg1 imageDownloader:(id)arg2 scenePath:(id)arg3 cropRect:(struct CGRect )arg4 ;


@end


#endif