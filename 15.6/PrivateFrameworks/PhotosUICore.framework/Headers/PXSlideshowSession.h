// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSLIDESHOWSESSION_H
#define PXSLIDESHOWSESSION_H

@class OKPresentationViewController, PHAssetCollection, NSString, UIView;
@protocol OKPresentationViewControllerDelegate, PXSlideshowSessionDelegate;

#import <Foundation/Foundation.h>


@interface PXSlideshowSession : NSObject <OKPresentationViewControllerDelegate>

 {
    OKPresentationViewController *_presentationViewController;
}


@property (readonly, nonatomic) PHAssetCollection *assetCollection; // ivar: _assetCollection
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXSlideshowSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIView *slideshowView;
@property (readonly, nonatomic) OKPresentationViewController *slideshowViewController;
@property (readonly, nonatomic) NSInteger startIndex; // ivar: _startIndex
@property (readonly) Class superclass;


+(*void)_loadSlideshowFrameworkIfNeeded;
+(void)initialize;
+(void)preloadSlideshowFrameworkIfNeeded;
-(id)_presentationGuidelines;
-(id)init;
-(id)initWithAssetCollection:(id)arg0 startIndex:(NSInteger)arg1 ;
-(void)_initPresentationViewController;
-(void)dealloc;
-(void)presentationViewControllerDidPrepare:(id)arg0 ;


@end


#endif