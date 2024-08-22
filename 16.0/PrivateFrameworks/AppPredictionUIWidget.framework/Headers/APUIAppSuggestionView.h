// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APUIAPPSUGGESTIONVIEW_H
#define APUIAPPSUGGESTIONVIEW_H

@class UITapGestureRecognizer, NSString;


#import "APUISuggestionView.h"
#import "APUIAppIconDataSource.h"

@interface APUIAppSuggestionView : APUISuggestionView {
    APUIAppIconDataSource *_dataSource;
    UITapGestureRecognizer *_tapRecognizer;
    NSString *_appBundleId;
}




-(void)_setAppWithBundleId:(id)arg0 reason:(id)arg1 ;
-(void)_tapRecognized:(id)arg0 ;
-(void)layoutSuggestion:(id)arg0 ;


@end


#endif