// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CNAUTOCOMPLETEMUTABLESOURCEINCLUSIONPOLICY_H
#define _CNAUTOCOMPLETEMUTABLESOURCEINCLUSIONPOLICY_H

@class NSString;
@protocol CNAutocompleteSourceInclusionPolicy;

#import <Foundation/Foundation.h>


@interface _CNAutocompleteMutableSourceInclusionPolicy : NSObject <CNAutocompleteSourceInclusionPolicy>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL includeCalendarServers; // ivar: _includeCalendarServers
@property BOOL includeContacts; // ivar: _includeContacts
@property BOOL includeDirectoryServers; // ivar: _includeDirectoryServers
@property BOOL includeLocalExtensions; // ivar: _includeLocalExtensions
@property BOOL includePredictions; // ivar: _includePredictions
@property BOOL includeRecents; // ivar: _includeRecents
@property BOOL includeSuggestions; // ivar: _includeSuggestions
@property BOOL includeSupplementalResults; // ivar: _includeSupplementalResults
@property (readonly) Class superclass;




@end


#endif