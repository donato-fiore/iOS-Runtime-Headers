// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLSCOPEFILTER_H
#define CPLSCOPEFILTER_H

@class NSSet, NSString;

#import <Foundation/Foundation.h>


@interface CPLScopeFilter : NSObject

@property (readonly, nonatomic) NSSet *excludedScopeIdentifiers; // ivar: _excludedScopeIdentifiers
@property (readonly, nonatomic) NSSet *includedScopeIdentifiers; // ivar: _includedScopeIdentifiers
@property (readonly, nonatomic) NSString *simpleDescription;


-(BOOL)filterOnScopeIdentifier:(id)arg0 ;
-(id)_setOfScopeIdentifiersFromEnumeration:(id)arg0 ;
-(id)description;
-(id)initWithExcludedScopeIdentifiers:(id)arg0 ;
-(id)initWithIncludedScopeIdentifiers:(id)arg0 ;


@end


#endif