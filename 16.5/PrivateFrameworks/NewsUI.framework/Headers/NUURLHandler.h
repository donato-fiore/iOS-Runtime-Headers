// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUURLHANDLER_H
#define NUURLHANDLER_H

@class NSString, NSMutableArray;
@protocol SXURLHandling, SXURLPreviewing, NUURLHandling, NUURLHandlerDelegate, NUPreviewViewControllerFactory, NUWebViewControllerFactoryType;

#import <Foundation/Foundation.h>


@interface NUURLHandler : NSObject <SXURLHandling, SXURLPreviewing>



@property (readonly, nonatomic) NSObject<NUURLHandling> *URLHandling; // ivar: _URLHandling
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NUURLHandlerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableArray *modifiers; // ivar: _modifiers
@property (retain, nonatomic) NSObject<NUPreviewViewControllerFactory> *previewViewControllerFactory; // ivar: _previewViewControllerFactory
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL universalLinksEnabled; // ivar: _universalLinksEnabled
@property (retain, nonatomic) NSObject<NUWebViewControllerFactoryType> *webViewControllerFactory; // ivar: _webViewControllerFactory


-(id)initWithURLHandling:(id)arg0 universalLinksEnabled:(BOOL)arg1 ;
-(id)modifyURL:(id)arg0 ;
-(id)viewControllerForURL:(id)arg0 ;
-(void)addModifier:(id)arg0 ;
-(void)commitViewController:(id)arg0 URL:(id)arg1 ;
-(void)openURL:(id)arg0 ;
-(void)presentViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)removeModifier:(id)arg0 ;


@end


#endif