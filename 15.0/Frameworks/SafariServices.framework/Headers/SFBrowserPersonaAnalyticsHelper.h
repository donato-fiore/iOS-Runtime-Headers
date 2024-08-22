// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFBROWSERPERSONAANALYTICSHELPER_H
#define SFBROWSERPERSONAANALYTICSHELPER_H


#import <Foundation/Foundation.h>


@interface SFBrowserPersonaAnalyticsHelper : NSObject {
    NSUInteger _persona;
    BOOL _hasReportedPresentingFromHostApp;
}




-(id)initWithPersona:(NSUInteger)arg0 ;
-(void)didDismissWithMethod:(int)arg0 ;
-(void)didLongTapToolbarButton:(int)arg0 ;
-(void)didPresentFromHostApp:(id)arg0 ;
-(void)didTapToolbarButton:(int)arg0 ;


@end


#endif