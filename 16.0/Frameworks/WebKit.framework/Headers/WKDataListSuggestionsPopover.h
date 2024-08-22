// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKDATALISTSUGGESTIONSPOPOVER_H
#define WKDATALISTSUGGESTIONSPOPOVER_H



#import "WKDataListSuggestionsControl.h"

@interface WKDataListSuggestionsPopover : WKDataListSuggestionsControl {
    RetainPtr<WKFormRotatingAccessoryPopover> _popover;
    RetainPtr<WKDataListSuggestionsViewController> _suggestionsViewController;
}




-(id)initWithInformation:(*void)arg0 inView:(id)arg1 ;
-(void)didSelectOptionAtIndex:(NSInteger)arg0 ;
-(void)invalidate;
-(void)showSuggestionsDropdown:(*void)arg0 activationType:(unsigned char)arg1 ;
-(void)updateWithInformation:(*void)arg0 ;


@end


#endif