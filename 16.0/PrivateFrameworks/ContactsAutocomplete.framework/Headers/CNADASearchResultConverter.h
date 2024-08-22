// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNADASEARCHRESULTCONVERTER_H
#define CNADASEARCHRESULTCONVERTER_H

@class NSMutableArray, NSString;

#import <Foundation/Foundation.h>

#import "CNAutocompleteResultFactory.h"
#import "CNAutocompleteNameComponents.h"

@interface CNADASearchResultConverter : NSObject {
    CNAutocompleteResultFactory *_factory;
    NSMutableArray *_results;
}


@property (copy) NSString *displayName; // ivar: _displayName
@property (copy) CNAutocompleteNameComponents *nameComponents; // ivar: _nameComponents


+(BOOL)shouldIncludeEmailAddressesForRequest:(id)arg0 ;
+(BOOL)shouldIncludePhoneNumbersForRequest:(id)arg0 ;
+(id)autocompleteResultsForDASearchResultElement:(id)arg0 request:(id)arg1 factory:(id)arg2 ;
+(id)displayNameForElement:(id)arg0 ;
+(id)nameComponentsForElement:(id)arg0 ;
+(id)resultTransformForRequest:(SEL)arg0 factory:(id)arg1 ;
-(id)build;
-(id)initWithFactory:(id)arg0 ;
-(void)addEmailAddress:(id)arg0 ;
-(void)addPhoneNumber:(id)arg0 ;


@end


#endif