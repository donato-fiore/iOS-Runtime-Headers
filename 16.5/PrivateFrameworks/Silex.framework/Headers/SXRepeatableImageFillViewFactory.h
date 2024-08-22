// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXREPEATABLEIMAGEFILLVIEWFACTORY_H
#define SXREPEATABLEIMAGEFILLVIEWFACTORY_H

@class NSString;
@protocol SXRepeatableImageFillViewFactory, SXDOMObjectProviding, SXImageViewFactory;

#import <Foundation/Foundation.h>


@interface SXRepeatableImageFillViewFactory : NSObject <SXRepeatableImageFillViewFactory>



@property (readonly, nonatomic) NSObject<SXDOMObjectProviding> *DOMObjectProvider; // ivar: _DOMObjectProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXImageViewFactory> *imageViewFactory; // ivar: _imageViewFactory
@property (readonly) Class superclass;


-(id)createRepeatableImageFillViewForRepeatableImageFill:(id)arg0 ;
-(id)initWithDOMObjectProvider:(id)arg0 imageViewFactory:(id)arg1 ;


@end


#endif