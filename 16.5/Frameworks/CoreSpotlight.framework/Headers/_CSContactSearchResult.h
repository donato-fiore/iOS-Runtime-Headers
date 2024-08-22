// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CSCONTACTSEARCHRESULT_H
#define _CSCONTACTSEARCHRESULT_H

@class NSString, NSArray, NSNumber;

#import <Foundation/Foundation.h>


@interface _CSContactSearchResult : NSObject

@property (readonly, nonatomic) BOOL contact;
@property (readonly, copy, nonatomic) NSString *contactIdentifer; // ivar: _contactIdentifer
@property (readonly, copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, copy, nonatomic) NSArray *emailAddresses; // ivar: _emailAddresses
@property (readonly, nonatomic) BOOL recent;
@property (readonly, copy, nonatomic) NSNumber *recentsIdentifier; // ivar: _recentsIdentifier
@property (nonatomic) NSUInteger scope; // ivar: _scope
@property (readonly, nonatomic) NSUInteger sourceType; // ivar: _sourceType


+(id)generateQueryStringForContact:(id)arg0 filterQueries:(id)arg1 inputScope:(NSUInteger)arg2 ;
-(id)initWithDisplayName:(id)arg0 emailAddresses:(id)arg1 contactIdentifier:(id)arg2 recentsIdentifier:(id)arg3 sourceType:(NSUInteger)arg4 ;


@end


#endif