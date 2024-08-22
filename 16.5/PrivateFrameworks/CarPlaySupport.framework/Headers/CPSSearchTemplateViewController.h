// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPSSEARCHTEMPLATEVIEWCONTROLLER_H
#define CPSSEARCHTEMPLATEVIEWCONTROLLER_H

@class UISearchContainerViewController, CPTemplate, NSString, CPListTemplate, CPSearchTemplate, NAFuture;
@protocol UISearchResultsUpdating, UISearchBarDelegate, UISearchControllerDelegate, CPListTemplateDelegate, CPSBaseTemplateViewController, CPSearchTemplateProviding, CPSearchClientTemplateDelegate, CPTemplateDelegate, CPSTemplateViewControllerDelegate;



@interface CPSSearchTemplateViewController : UISearchContainerViewController <UISearchResultsUpdating, UISearchBarDelegate, UISearchControllerDelegate, CPListTemplateDelegate, CPSBaseTemplateViewController, CPSearchTemplateProviding>



@property (retain, nonatomic) CPTemplate *associatedTemplate; // ivar: _associatedTemplate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didDisappear; // ivar: _didDisappear
@property (nonatomic) BOOL didPop; // ivar: _didPop
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CPListTemplate *listTemplate; // ivar: _listTemplate
@property (readonly, nonatomic) CPSearchTemplate *searchTemplate;
@property (readonly, weak, nonatomic) NSObject<CPSearchClientTemplateDelegate> *searchTemplateDelegate;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<CPTemplateDelegate> *templateDelegate; // ivar: _templateDelegate
@property (readonly, nonatomic) NAFuture *templateProviderFuture; // ivar: _templateProviderFuture
@property (weak, nonatomic) NSObject<CPSTemplateViewControllerDelegate> *viewControllerDelegate; // ivar: _viewControllerDelegate


-(BOOL)_isSceneActive;
-(BOOL)searchBarShouldEndEditing:(id)arg0 ;
-(id)initWithSearchTemplate:(id)arg0 templateDelegate:(id)arg1 templateEnvironment:(id)arg2 interactionModel:(NSUInteger)arg3 ;
-(void)_cleanup;
-(void)_cps_viewControllerWasPopped;
-(void)didDismissSearchController:(id)arg0 ;
-(void)listTemplate:(id)arg0 didSelectListItem:(id)arg1 completionHandler:(id)arg2 ;
-(void)searchBarSearchButtonClicked:(id)arg0 ;
-(void)updateSearchResultsForSearchController:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif