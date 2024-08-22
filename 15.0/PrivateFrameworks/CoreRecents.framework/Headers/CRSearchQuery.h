// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRSEARCHQUERY_H
#define CRSEARCHQUERY_H

@class NSArray, NSPredicate, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CRSearchQuery : NSObject <NSSecureCoding>



@property (copy, nonatomic) id *comparator; // ivar: _comparator
@property (copy, nonatomic) NSArray *domains; // ivar: _domains
@property (nonatomic) NSUInteger implicitGroupThreshold; // ivar: _implicitGroupThreshold
@property (nonatomic) NSUInteger options; // ivar: _options
@property (nonatomic) _NSRange pageRange; // ivar: _pageRange
@property (retain, nonatomic) NSPredicate *predicate; // ivar: _predicate
@property (readonly, copy, nonatomic) NSString *uuid; // ivar: _uuid
@property (copy, nonatomic) id *weightDecayer; // ivar: _weightDecayer


+(BOOL)supportsSecureCoding;
+(id)frecencyComparator:(SEL)arg0 ;
+(id)frecencyComparatorForSearch:(SEL)arg0 preferredKinds:(id)arg1 sendingAddress:(id)arg2 queryOptions:(id)arg3 ;
+(id)rankedFrecencyComparatorWithPreferredSources:(SEL)arg0 ;
+(id)searchQueryForSearchTerm:(id)arg0 preferredKinds:(id)arg1 sendingAddress:(id)arg2 recentsDomain:(id)arg3 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif