// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CADEVENTSFORASSISTANTSEARCHPREDICATE_H
#define CADEVENTSFORASSISTANTSEARCHPREDICATE_H

@class NSString, NSArray;
@protocol EKDefaultPropertiesLoading, NSSecureCoding;


#import "EKPredicate.h"

@interface CADEventsForAssistantSearchPredicate : EKPredicate <EKDefaultPropertiesLoading, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger limit; // ivar: _limit
@property (copy, nonatomic) NSString *location; // ivar: _location
@property (copy, nonatomic) NSString *notes; // ivar: _notes
@property (copy, nonatomic) NSArray *participants; // ivar: _participants
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)shouldLoadDefaultProperties;
-(id)copyMatchingItemsWithDatabase:(struct CalDatabase *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)defaultPropertiesToLoad;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTimeZone:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 title:(id)arg3 location:(id)arg4 notes:(id)arg5 participants:(id)arg6 limit:(NSInteger)arg7 ;
-(id)predicateFormat;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif