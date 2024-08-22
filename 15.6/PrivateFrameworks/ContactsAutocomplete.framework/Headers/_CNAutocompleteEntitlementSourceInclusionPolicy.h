// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CNAUTOCOMPLETEENTITLEMENTSOURCEINCLUSIONPOLICY_H
#define _CNAUTOCOMPLETEENTITLEMENTSOURCEINCLUSIONPOLICY_H

@class NSString;
@protocol CNAutocompleteSourceInclusionPolicy;

#import <Foundation/Foundation.h>


@interface _CNAutocompleteEntitlementSourceInclusionPolicy : NSObject <CNAutocompleteSourceInclusionPolicy>



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
@property (readonly) Class superclass;




@end


#endif