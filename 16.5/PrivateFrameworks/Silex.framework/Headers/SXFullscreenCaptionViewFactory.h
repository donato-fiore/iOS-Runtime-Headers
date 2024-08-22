// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXFULLSCREENCAPTIONVIEWFACTORY_H
#define SXFULLSCREENCAPTIONVIEWFACTORY_H

@class NSString;
@protocol SXFullscreenCaptionViewFactory, SXComponentActionHandler, SXTextSourceFactory;

#import <Foundation/Foundation.h>


@interface SXFullscreenCaptionViewFactory : NSObject <SXFullscreenCaptionViewFactory>



@property (readonly, nonatomic) NSObject<SXComponentActionHandler> *actionHandler; // ivar: _actionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<SXTextSourceFactory> *textSourceFactory; // ivar: _textSourceFactory


-(id)createCaptionView;
-(id)initWithTextSourceFactory:(id)arg0 actionHandler:(id)arg1 ;


@end


#endif