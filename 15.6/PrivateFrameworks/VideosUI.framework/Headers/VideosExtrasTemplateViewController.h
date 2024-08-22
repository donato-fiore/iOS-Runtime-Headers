// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VIDEOSEXTRASTEMPLATEVIEWCONTROLLER_H
#define VIDEOSEXTRASTEMPLATEVIEWCONTROLLER_H

@class IKViewElement, NSDictionary, NSString, IKAppDocument;
@protocol IKAppDocumentDelegate;


#import "VideosExtrasElementViewController.h"
#import "VideosExtrasContext.h"

@interface VideosExtrasTemplateViewController : VideosExtrasElementViewController <IKAppDocumentDelegate>

 {
    IKViewElement *_displayedTemplate;
    NSDictionary *_options;
}


@property (readonly, weak, nonatomic) VideosExtrasContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) IKAppDocument *document; // ivar: _document
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL showsPlaceholder;
@property (readonly) Class superclass;


+(id)templateViewControllerWithDocument:(id)arg0 options:(id)arg1 context:(id)arg2 ;
-(BOOL)shouldUpdateByReplacingViewControllerWithTemplate:(id)arg0 ;
-(id)initWithDocument:(id)arg0 options:(id)arg1 context:(id)arg2 ;
-(void)_showPlaceholder;
-(void)_startBackgroundAudio;
-(void)configureBackgroundWithElements:(id)arg0 ;
-(void)dealloc;
-(void)documentDidFail:(id)arg0 withError:(id)arg1 ;
-(void)documentDidUpdate:(id)arg0 ;
-(void)documentNeedsUpdate:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif