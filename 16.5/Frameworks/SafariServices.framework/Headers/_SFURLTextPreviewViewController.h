// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFURLTEXTPREVIEWVIEWCONTROLLER_H
#define _SFURLTEXTPREVIEWVIEWCONTROLLER_H

@class UIViewController, NSArray, _WKActivatedElementInfo, NSURL;


#import "_SFLinkPreviewHeader.h"
#import "_SFURLTextPreviewView.h"

@interface _SFURLTextPreviewViewController : UIViewController {
    NSArray *_linkActions;
    _WKActivatedElementInfo *_activatedElementInfo;
    _SFLinkPreviewHeader *_previewHeader;
}


@property (copy, nonatomic) NSURL *URL; // ivar: _URL
@property (retain, nonatomic) _SFURLTextPreviewView *previewView; // ivar: _previewView


-(id)_activatedElementInfo;
-(id)_linkActions;
-(id)_previewHeader;
-(id)initWithURL:(id)arg0 ;
-(void)_setActivatedElementInfo:(id)arg0 ;
-(void)_setLinkActions:(id)arg0 ;
-(void)loadView;
-(void)viewWillLayoutSubviews;


@end


#endif