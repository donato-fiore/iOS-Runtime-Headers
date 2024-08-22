// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REHTMLPAGEBUILDER_H
#define REHTMLPAGEBUILDER_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "REHTMLElement.h"

@interface REHTMLPageBuilder : NSObject {
    REHTMLElement *_stylesheetsElement;
    REHTMLElement *_scriptsElement;
    REHTMLElement *_pageDescriptionElement;
    REHTMLElement *_navigationLinksElement;
}


@property (retain, nonatomic) NSArray *links; // ivar: _links
@property (retain, nonatomic) NSArray *loadingScripts; // ivar: _loadingScripts
@property (retain, nonatomic) NSString *pageDescription; // ivar: _pageDescription
@property (retain, nonatomic) NSArray *stylesheets; // ivar: _stylesheets


+(id)_bodyElement;
+(id)_docTypeElement;
+(id)_headElement;
+(id)_htmlElement;
+(id)_iosIcon;
+(id)_largeFavicon;
+(id)_mainNavigationElement;
+(id)_safariIcon;
+(id)_scriptElementWithLocation:(id)arg0 ;
+(id)_smallFavicon;
+(id)_stylesheetElementWithLocation:(id)arg0 ;
+(id)_viewportElement;
-(id)init;
-(id)pageWithTitle:(id)arg0 content:(id)arg1 backLocation:(id)arg2 ;


@end


#endif