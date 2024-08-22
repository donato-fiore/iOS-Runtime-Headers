// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFCALENDAREVENTDETECTOR_H
#define _SFCALENDAREVENTDETECTOR_H

@class WKWebView;

#import <Foundation/Foundation.h>


@interface _SFCalendarEventDetector : NSObject {
    WKWebView *_webView;
    id *_checkForCalendarEventsBlock;
}




-(id)initWithWebView:(id)arg0 ;
-(void)_containsCalendarEventForPageWithSchemaOrgMarkup:(BOOL)arg0 ;
-(void)_foundCalendarEvents:(id)arg0 ;
-(void)_service:(id)arg0 didFindEventCandidateForURL:(id)arg1 pageTitle:(id)arg2 ;
-(void)cancelCheckForConfirmationPage;
-(void)containsCalendarEventForPageWithSchemaOrgMarkup:(BOOL)arg0 ;


@end


#endif