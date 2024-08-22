// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OKWIDGETOPUSVIEW_H
#define OKWIDGETOPUSVIEW_H

@class NSURL;


#import "OKWidgetView.h"
#import "OKDocument.h"
#import "OKPresentationViewController.h"

@interface OKWidgetOpusView : OKWidgetView {
    NSURL *_url;
    OKDocument *_document;
    OKPresentationViewController *_presentationViewController;
}




+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg0 ;
-(BOOL)prepareForDisplay:(BOOL)arg0 ;
-(BOOL)prepareForUnload:(BOOL)arg0 ;
-(BOOL)prepareForWarmup:(BOOL)arg0 ;
-(id)initWithWidget:(id)arg0 ;
-(void)_loadDocumentIfNeeded;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setSettingUrl:(id)arg0 ;


@end


#endif