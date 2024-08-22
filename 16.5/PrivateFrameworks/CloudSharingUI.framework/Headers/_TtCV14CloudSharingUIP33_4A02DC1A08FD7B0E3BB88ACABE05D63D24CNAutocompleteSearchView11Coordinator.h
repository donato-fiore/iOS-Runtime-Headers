// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTCV14CLOUDSHARINGUIP33_4A02DC1A08FD7B0E3BB88ACABE05D63D24CNAUTOCOMPLETESEARCHVIEW11COORDINATOR_H
#define _TTCV14CLOUDSHARINGUIP33_4A02DC1A08FD7B0E3BB88ACABE05D63D24CNAUTOCOMPLETESEARCHVIEW11COORDINATOR_H

@protocol CNAutocompleteSearchControllerDelegate;

#import <Foundation/Foundation.h>


@interface _TtCV14CloudSharingUIP33_4A02DC1A08FD7B0E3BB88ACABE05D63D24CNAutocompleteSearchView11Coordinator : NSObject <CNAutocompleteSearchControllerDelegate>

 {
    ? viewModel;
}




-(id)init;
-(id)searchController:(id)arg0 composeRecipientForAddress:(id)arg1 ;
-(void)didTapTextViewAccessoryButtonForSearchController:(id)arg0 anchoredToView:(id)arg1 ;
-(void)searchController:(id)arg0 didAddRecipient:(id)arg1 ;
-(void)searchController:(id)arg0 didRemoveRecipient:(id)arg1 ;
-(void)searchController:(id)arg0 didTapTableAccessoryForRecipient:(id)arg1 ;


@end


#endif