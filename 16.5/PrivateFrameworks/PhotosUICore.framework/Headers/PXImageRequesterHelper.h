// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXIMAGEREQUESTERHELPER_H
#define PXIMAGEREQUESTERHELPER_H

@class NSString, UIImage;
@protocol PXChangeObserver, PXDisplayAsset, PXUIImageProvider;


#import "PXObservable.h"
#import "PXImageRequester.h"

@interface PXImageRequesterHelper : PXObservable <PXChangeObserver>



@property (readonly, nonatomic) NSObject<PXDisplayAsset> *asset; // ivar: _asset
@property (readonly, nonatomic) CGSize contentSize; // ivar: _contentSize
@property (readonly, nonatomic) CGRect contentsRect; // ivar: _contentsRect
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) PXImageRequester *imageRequester; // ivar: _imageRequester
@property (readonly, nonatomic) NSObject<PXUIImageProvider> *mediaProvider; // ivar: _mediaProvider
@property (readonly, nonatomic) CGFloat scale; // ivar: _scale
@property (readonly) Class superclass;


-(void)_updateAssetOrMediaProvider;
-(void)_updateContentsRect;
-(void)_updateImage;
-(void)_updateImageRequester;
-(void)didPublishChanges;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)performChanges:(id)arg0 ;


@end


#endif