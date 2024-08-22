// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNAUTOCOMPLETEFETCHREQUEST_H
#define CNAUTOCOMPLETEFETCHREQUEST_H

@class NSNumber, NSString, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CNAutocompleteFetchContext.h"

@interface CNAutocompleteFetchRequest : NSObject <NSCopying, NSSecureCoding>

 {
    NSNumber *_shouldIncludeGroupResultsImpl;
}


@property (copy) CNAutocompleteFetchContext *fetchContext; // ivar: _fetchContext
@property BOOL includeCalendarServers; // ivar: _includeCalendarServers
@property BOOL includeContacts; // ivar: _includeContacts
@property BOOL includeDirectoryServers; // ivar: _includeDirectoryServers
@property BOOL includeLocalExtensions; // ivar: _includeLocalExtensions
@property BOOL includePredictions; // ivar: _includePredictions
@property BOOL includeRecents; // ivar: _includeRecents
@property BOOL includeServers;
@property BOOL includeStewie; // ivar: _includeStewie
@property BOOL includeSuggestions; // ivar: _includeSuggestions
@property (copy) NSString *priorityDomainForSorting; // ivar: _priorityDomainForSorting
@property (copy) NSString *searchString; // ivar: _searchString
@property NSUInteger searchType; // ivar: _searchType
@property (readonly) NSArray *searchableProperties;
@property (copy) NSString *sendingAddress;
@property BOOL shouldIncludeGroupResults;
@property (readonly) NSString *triageIdentifier; // ivar: _triageIdentifier


+(BOOL)supportsSecureCoding;
+(id)makeTriageIdentifier;
+(id)request;
+(id)searchablePropertiesForSearchType:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValid:(*id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)executeWithDelegate:(id)arg0 ;
-(id)includeDebugString;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif