// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CADNATURALLANGUAGESUGGESTEDEVENTSSEARCHPREDICATE_H
#define CADNATURALLANGUAGESUGGESTEDEVENTSSEARCHPREDICATE_H

@class NSString, NSDate;
@protocol EKDefaultPropertiesLoading, NSSecureCoding;


#import "EKPredicate.h"

@interface CADNaturalLanguageSuggestedEventsSearchPredicate : EKPredicate <EKDefaultPropertiesLoading, NSSecureCoding>

 {
    NSString *_searchString;
    BOOL _allNLEvents;
    NSDate *_startDate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)shouldLoadDefaultProperties;
-(id)copyMatchingItemsWithDatabase:(struct CalDatabase *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)defaultPropertiesToLoad;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSearchString:(id)arg0 allNLEvents:(BOOL)arg1 startDate:(id)arg2 timeZone:(id)arg3 ;
-(id)initWithSearchString:(id)arg0 startDate:(id)arg1 timeZone:(id)arg2 ;
-(id)initWithSearchString:(id)arg0 timeZone:(id)arg1 ;
-(id)predicateFormat;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif