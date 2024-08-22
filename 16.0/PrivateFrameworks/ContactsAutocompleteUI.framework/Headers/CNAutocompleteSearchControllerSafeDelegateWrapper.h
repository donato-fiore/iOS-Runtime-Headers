// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNAUTOCOMPLETESEARCHCONTROLLERSAFEDELEGATEWRAPPER_H
#define CNAUTOCOMPLETESEARCHCONTROLLERSAFEDELEGATEWRAPPER_H

@class NSString;
@protocol CNAutocompleteSearchControllerInternalDelegate;

#import <Foundation/Foundation.h>


@interface CNAutocompleteSearchControllerSafeDelegateWrapper : NSObject <CNAutocompleteSearchControllerInternalDelegate>

 {
    ? _delegateFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNAutocompleteSearchControllerInternalDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)log;
-(BOOL)searchController:(id)arg0 imageDataForRecipient:(id)arg1 imageUpdateBlock:(id)arg2 ;
-(BOOL)searchController:(id)arg0 supplementalGroupsForSearchQuery:(id)arg1 completionHandler:(id)arg2 ;
-(NSUInteger)searchController:(id)arg0 presentationOptionsForRecipient:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)searchController:(id)arg0 composeRecipientForAddress:(id)arg1 ;
-(id)searchController:(id)arg0 contextMenuConfigurationForRecipient:(id)arg1 ;
-(id)searchController:(id)arg0 preferredRecipientForRecipient:(id)arg1 ;
-(id)searchController:(id)arg0 tintColorForRecipient:(id)arg1 ;
-(void)didTapTextViewAccessoryButtonForSearchController:(id)arg0 ;
-(void)didTapTextViewAccessoryButtonForSearchController:(id)arg0 anchoredToView:(id)arg1 ;
-(void)searchController:(id)arg0 didAddRecipient:(id)arg1 ;
-(void)searchController:(id)arg0 didEndDisplayingRowForRecipient:(id)arg1 ;
-(void)searchController:(id)arg0 didHideResultsView:(id)arg1 ;
-(void)searchController:(id)arg0 didRemoveRecipient:(id)arg1 ;
-(void)searchController:(id)arg0 didShowResultsView:(id)arg1 ;
-(void)searchController:(id)arg0 didTapTableAccessoryForRecipient:(id)arg1 ;
-(void)searchController:(id)arg0 textViewDidChangeSize:(struct CGSize )arg1 ;
-(void)searchController:(id)arg0 textViewWillChangeSize:(struct CGSize )arg1 ;
-(void)searchController:(id)arg0 willDisplayRowForRecipient:(id)arg1 ;
-(void)searchController:(id)arg0 willHideResultsView:(id)arg1 ;
-(void)searchController:(id)arg0 willShowResultsView:(id)arg1 ;


@end


#endif