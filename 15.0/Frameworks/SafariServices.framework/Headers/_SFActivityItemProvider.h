// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFACTIVITYITEMPROVIDER_H
#define _SFACTIVITYITEMPROVIDER_H

@class UIActivityItemProvider, NSSet, NSString, NSURL, WKWebView;



@interface _SFActivityItemProvider : UIActivityItemProvider

@property (copy, nonatomic) NSSet *excludedActivityTypes; // ivar: _excludedActivityTypes
@property (copy, nonatomic) NSString *pageTitle; // ivar: _pageTitle
@property (copy, nonatomic) id *thumbnailHandler; // ivar: _thumbnailHandler
@property (retain, nonatomic) NSURL *url; // ivar: _url
@property (weak, nonatomic) WKWebView *webView; // ivar: _webView


-(id)activityViewController:(id)arg0 itemForActivityType:(id)arg1 ;
-(id)activityViewController:(id)arg0 subjectForActivityType:(id)arg1 ;
-(id)activityViewController:(id)arg0 thumbnailImageForActivityType:(id)arg1 suggestedSize:(struct CGSize )arg2 ;
-(id)initWithPlaceholderItem:(id)arg0 ;
-(id)initWithPlaceholderItem:(id)arg0 URL:(id)arg1 pageTitle:(id)arg2 webView:(id)arg3 ;
-(id)initWithURL:(id)arg0 pageTitle:(id)arg1 webView:(id)arg2 ;
-(id)item;
-(void)main;


@end


#endif