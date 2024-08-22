// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CNAUTOCOMPLETEAGGREGATESOURCEINCLUSIONPOLICY_H
#define _CNAUTOCOMPLETEAGGREGATESOURCEINCLUSIONPOLICY_H

@class NSString, NSArray;
@protocol CNAutocompleteSourceInclusionPolicy;

#import <Foundation/Foundation.h>


@interface _CNAutocompleteAggregateSourceInclusionPolicy : NSObject <CNAutocompleteSourceInclusionPolicy>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL includeCalendarServers;
@property (readonly) BOOL includeContacts;
@property (readonly) BOOL includeDirectoryServers;
@property (readonly) BOOL includeLocalExtensions;
@property (readonly) BOOL includePredictions;
@property (readonly) BOOL includeRecents;
@property (readonly) BOOL includeSuggestions;
@property (readonly) BOOL includeSupplementalResults;
@property (readonly) NSArray *policies; // ivar: _policies
@property (readonly) Class superclass;


-(id)initWithPolicies:(id)arg0 ;


@end


#endif