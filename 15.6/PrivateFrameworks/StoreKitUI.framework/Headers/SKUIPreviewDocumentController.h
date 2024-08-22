// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIPREVIEWDOCUMENTCONTROLLER_H
#define SKUIPREVIEWDOCUMENTCONTROLLER_H

@class SUAudioPlayer, IKAppDocument, NSOperationQueue, NSHashTable, NSString;
@protocol IKAppDocumentDelegate, SKUIStatusOverlayProvider;

#import <Foundation/Foundation.h>

#import "SKUIClientContext.h"

@interface SKUIPreviewDocumentController : NSObject <IKAppDocumentDelegate, SKUIStatusOverlayProvider>

 {
    SUAudioPlayer *_audioPlayer;
    IKAppDocument *_document;
    NSOperationQueue *_operationQueue;
    NSHashTable *_viewControllers;
}


@property (retain, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isPreviewActive) BOOL previewActive;
@property (readonly) Class superclass;


-(id)_operationQueue;
-(id)initWithDocument:(id)arg0 ;
-(id)overlayViewControllerWithBackgroundStyle:(NSInteger)arg0 ;
-(void)_audioPlayerStatusChangeNotification:(id)arg0 ;
-(void)_connectToAudioPlayer;
-(void)_playerSessionsDidChangeNotification:(id)arg0 ;
-(void)_reloadViewControllersWithPreviewStatus:(id)arg0 animated:(BOOL)arg1 ;
-(void)dealloc;
-(void)documentDidUpdate:(id)arg0 ;
-(void)documentNeedsUpdate:(id)arg0 ;


@end


#endif