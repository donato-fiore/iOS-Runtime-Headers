// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIIPADSEARCHCONTROLLER_H
#define SKUIIPADSEARCHCONTROLLER_H

@class NSString, UIViewController;
@protocol SKUISearchFieldDelegate;

#import <Foundation/Foundation.h>

#import "SKUISearchFieldController.h"
#import "SKUIClientContext.h"

@interface SKUIIPadSearchController : NSObject <SKUISearchFieldDelegate>

 {
    SKUISearchFieldController *_searchFieldController;
}


@property (retain, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) UIViewController *parentViewController; // ivar: _parentViewController
@property (readonly, nonatomic) SKUISearchFieldController *searchFieldController;
@property (readonly) Class superclass;


+(id)lastSearchTerm;
+(void)setLastSearchTerm:(id)arg0 ;
-(id)initWithParentViewController:(id)arg0 ;
-(id)newSearchFieldBarItem;
-(void)_termDidChangeNotification:(id)arg0 ;
-(void)dealloc;
-(void)reloadSearchField;
-(void)searchFieldController:(id)arg0 requestSearch:(id)arg1 ;
-(void)setNumberOfSearchResults:(NSInteger)arg0 ;
-(void)setSearchFieldPlaceholderText:(id)arg0 ;
-(void)setSearchFieldText:(id)arg0 ;


@end


#endif