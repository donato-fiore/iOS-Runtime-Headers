// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTCC14WORKFLOWUICORE28UIKITAUTOCOMPLETECOORDINATORP33_17D2B1D61821AB32E69A848E6689616F23AUTOCOMPLETEBARDELEGATE_H
#define _TTCC14WORKFLOWUICORE28UIKITAUTOCOMPLETECOORDINATORP33_17D2B1D61821AB32E69A848E6689616F23AUTOCOMPLETEBARDELEGATE_H

@protocol WFAutocompleteAccessoryBarDelegate;

#import <Foundation/Foundation.h>


@interface _TtCC14WorkflowUICore28UIKitAutocompleteCoordinatorP33_17D2B1D61821AB32E69A848E6689616F23AutocompleteBarDelegate : NSObject <WFAutocompleteAccessoryBarDelegate>

 {
    ? owner;
}




-(NSInteger)numberOfItemsForAutocompleteAccessoryBar:(id)arg0 ;
-(id)autocompleteAccessoryBar:(id)arg0 displayNameForItemAtIndex:(NSInteger)arg1 ;
-(id)autocompleteAccessoryBar:(id)arg0 imageForItemAtIndex:(NSInteger)arg1 ;
-(id)autocompleteAccessoryBar:(id)arg0 variableForItemAtIndex:(NSInteger)arg1 ;
-(id)init;
-(void)autocompleteAccessoryBar:(id)arg0 didSelectItemAtIndex:(NSInteger)arg1 ;
-(void)autocompleteAccessoryBarDidDismiss:(id)arg0 ;


@end


#endif