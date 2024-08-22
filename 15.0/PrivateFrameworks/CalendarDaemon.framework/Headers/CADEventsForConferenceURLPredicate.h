// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CADEVENTSFORCONFERENCEURLPREDICATE_H
#define CADEVENTSFORCONFERENCEURLPREDICATE_H

@class NSString;
@protocol EKDefaultPropertiesLoading, NSSecureCoding;


#import "EKPredicate.h"

@interface CADEventsForConferenceURLPredicate : EKPredicate <EKDefaultPropertiesLoading, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger limit; // ivar: _limit
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *urlString; // ivar: _urlString


+(BOOL)supportsSecureCoding;
-(BOOL)shouldLoadDefaultProperties;
-(id)copyMatchingItemsWithDatabase:(struct CalDatabase *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)defaultPropertiesToLoad;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 limit:(NSInteger)arg1 ;
-(id)predicateFormat;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif