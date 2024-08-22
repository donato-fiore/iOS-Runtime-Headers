// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPSEARCHTEMPLATE_H
#define CPSEARCHTEMPLATE_H

@class NSString, NSArray, NAFuture;
@protocol CPSearchClientTemplateDelegate, CPSearchTemplateDelegate;


#import "CPTemplate.h"

@interface CPSearchTemplate : CPTemplate <CPSearchClientTemplateDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CPSearchTemplateDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *listItems; // ivar: _listItems
@property (readonly) Class superclass;
@property (retain, nonatomic) NAFuture *templateProviderFuture;


-(id)leadingNavigationBarButtons;
-(id)trailingNavigationBarButtons;
-(void)searchTemplateSearchButtonPressedWithIdentifier:(id)arg0 ;
-(void)searchTemplateWithIdentifier:(id)arg0 selectedResultWithIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)searchTemplateWithIdentifier:(id)arg0 updateSearchResultsForSearchText:(id)arg1 completionResults:(id)arg2 ;
-(void)setLeadingNavigationBarButtons:(id)arg0 ;
-(void)setTrailingNavigationBarButtons:(id)arg0 ;


@end


#endif