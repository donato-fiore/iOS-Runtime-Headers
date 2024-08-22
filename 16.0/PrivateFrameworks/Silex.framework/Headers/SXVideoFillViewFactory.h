// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXVIDEOFILLVIEWFACTORY_H
#define SXVIDEOFILLVIEWFACTORY_H

@class NSString;
@protocol SXVideoFillViewFactory, SXDOMObjectProviding, SXImageViewFactory;

#import <Foundation/Foundation.h>


@interface SXVideoFillViewFactory : NSObject <SXVideoFillViewFactory>



@property (readonly, nonatomic) NSObject<SXDOMObjectProviding> *DOMObjectProvider; // ivar: _DOMObjectProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXImageViewFactory> *imageViewFactory; // ivar: _imageViewFactory
@property (readonly) Class superclass;


-(id)createVideoFillViewForVideoFill:(id)arg0 ;
-(id)initWithDOMObjectProvider:(id)arg0 imageViewFactory:(id)arg1 ;


@end


#endif