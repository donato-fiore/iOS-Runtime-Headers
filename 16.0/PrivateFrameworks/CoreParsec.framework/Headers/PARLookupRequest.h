// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PARLOOKUPREQUEST_H
#define PARLOOKUPREQUEST_H

@class NSString;
@protocol NSSecureCoding;


#import "PARRequest.h"

@interface PARLookupRequest : PARRequest <NSSecureCoding>



@property (copy, nonatomic) NSString *appBundleId; // ivar: _appBundleId
@property (copy, nonatomic) NSString *domain; // ivar: _domain
@property (nonatomic) NSInteger lookupSelectionType; // ivar: _lookupSelectionType
@property (retain, nonatomic) NSString *preferredLanguage; // ivar: _preferredLanguage
@property (copy, nonatomic) NSString *queryContext; // ivar: _queryContext
@property (copy, nonatomic) NSString *queryString; // ivar: _queryString


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(unsigned int)nwActivityLabel;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif