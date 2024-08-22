// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKDATALISTSUGGESTIONSCONTROL_H
#define WKDATALISTSUGGESTIONSCONTROL_H


#import <Foundation/Foundation.h>

#import "WKContentView.h"

@interface WKDataListSuggestionsControl : NSObject {
    WeakPtr<WebKit::WebDataListSuggestionsDropdownIOS, WTF::EmptyCounter> _dropdown;
    Vector<WebCore::DataListSuggestion, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> _suggestions;
}


@property (nonatomic) BOOL isShowingSuggestions; // ivar: _isShowingSuggestions
@property (weak, nonatomic) WKContentView *view; // ivar: _view


-(NSInteger)suggestionsCount;
-(NSInteger)textAlignment;
-(id)initWithInformation:(*void)arg0 inView:(id)arg1 ;
-(id)textSuggestions;
-(struct String )suggestionAtIndex:(NSInteger)arg0 ;
-(void)didSelectOptionAtIndex:(NSInteger)arg0 ;
-(void)invalidate;
-(void)showSuggestionsDropdown:(*void)arg0 activationType:(unsigned char)arg1 ;
-(void)updateWithInformation:(*void)arg0 ;


@end


#endif