// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CADNATURALLANGUAGESUGGESTEDEVENTSSEARCHPREDICATE_H
#define CADNATURALLANGUAGESUGGESTEDEVENTSSEARCHPREDICATE_H

@class NSString, NSDate;
@protocol NSSecureCoding;


#import "EKPredicate.h"

@interface CADNaturalLanguageSuggestedEventsSearchPredicate : EKPredicate <NSSecureCoding>

 {
    NSString *_searchString;
    BOOL _allNLEvents;
    NSDate *_startDate;
}




+(BOOL)supportsSecureCoding;
-(?)copyMatchingItemsWithDatabase;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)defaultPropertiesToLoad;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSearchString:(id)arg0 allNLEvents:(BOOL)arg1 startDate:(id)arg2 timeZone:(id)arg3 ;
-(id)initWithSearchString:(id)arg0 startDate:(id)arg1 timeZone:(id)arg2 ;
-(id)initWithSearchString:(id)arg0 timeZone:(id)arg1 ;
-(id)predicateFormat;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif