// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKPLACECOLLECTIONIMAGEGRADIENTOPERATION_H
#define MKPLACECOLLECTIONIMAGEGRADIENTOPERATION_H

@class NSOperation, UIImage, NSCache, NSString, NSURL;



@interface MKPlaceCollectionImageGradientOperation : NSOperation

@property (readonly, nonatomic) UIImage *blurredImage; // ivar: _blurredImage
@property (weak, nonatomic) NSCache *blurringCache; // ivar: _blurringCache
@property (retain, nonatomic) NSString *cacheId; // ivar: _cacheId
@property (retain, nonatomic) NSString *contentSizeCategory; // ivar: _contentSizeCategory
@property (retain, nonatomic) NSString *debugName; // ivar: _debugName
@property (nonatomic) CGSize desiredSize; // ivar: _desiredSize
@property (weak, nonatomic) NSCache *downloadCache; // ivar: _downloadCache
@property (nonatomic) BOOL isRTL; // ivar: _isRTL
@property (nonatomic) CGFloat screenScale; // ivar: _screenScale
@property (retain, nonatomic) UIImage *sourceImage; // ivar: _sourceImage
@property (retain, nonatomic) NSURL *url; // ivar: _url


-(id)initWithUrl:(id)arg0 size:(struct CGSize )arg1 contentSizeCategory:(id)arg2 name:(id)arg3 downloadCache:(id)arg4 gradientCache:(id)arg5 isRTL:(BOOL)arg6 screenScale:(CGFloat)arg7 cacheId:(id)arg8 ;
-(void)main;


@end


#endif