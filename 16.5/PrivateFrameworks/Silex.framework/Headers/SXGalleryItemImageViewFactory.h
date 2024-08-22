// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXGALLERYITEMIMAGEVIEWFACTORY_H
#define SXGALLERYITEMIMAGEVIEWFACTORY_H

@class NSString;
@protocol SXGalleryItemImageViewFactory, SWReachabilityProvider, SXResourceDataSourceProvider;

#import <Foundation/Foundation.h>


@interface SXGalleryItemImageViewFactory : NSObject <SXGalleryItemImageViewFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SWReachabilityProvider> *reachabilityProvider; // ivar: _reachabilityProvider
@property (readonly, nonatomic) NSObject<SXResourceDataSourceProvider> *resourceDataSourceProvider; // ivar: _resourceDataSourceProvider
@property (readonly) Class superclass;


-(id)imageViewForGalleryItem:(id)arg0 imageResource:(id)arg1 ;
-(id)initWithResourceDataSourceProvider:(id)arg0 reachabilityProvider:(id)arg1 ;


@end


#endif