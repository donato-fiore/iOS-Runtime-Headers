// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSANALYTICSEVENTSEARCHRESULTSELECTED_H
#define TPSANALYTICSEVENTSEARCHRESULTSELECTED_H

@class NSString;


#import "TPSAnalyticsEvent.h"

@interface TPSAnalyticsEventSearchResultSelected : TPSAnalyticsEvent

@property (copy, nonatomic) NSString *collectionID; // ivar: _collectionID
@property (copy, nonatomic) NSString *correlationID; // ivar: _correlationID
@property (copy, nonatomic) NSString *searchID; // ivar: _searchID
@property (copy, nonatomic) NSString *searchTerm; // ivar: _searchTerm
@property (copy, nonatomic) NSString *tipID; // ivar: _tipID


+(BOOL)supportsSecureCoding;
+(id)eventWithSearchID:(id)arg0 searchTerm:(id)arg1 tipID:(id)arg2 collectionID:(id)arg3 correlationID:(id)arg4 ;
-(id)_initWithSearchID:(id)arg0 searchTerm:(id)arg1 tipID:(id)arg2 collectionID:(id)arg3 correlationID:(id)arg4 ;
-(id)eventName;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableAnalyticsEventRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif