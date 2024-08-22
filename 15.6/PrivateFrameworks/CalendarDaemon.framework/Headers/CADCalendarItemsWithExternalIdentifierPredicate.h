// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CADCALENDARITEMSWITHEXTERNALIDENTIFIERPREDICATE_H
#define CADCALENDARITEMSWITHEXTERNALIDENTIFIERPREDICATE_H

@class NSString;
@protocol NSSecureCoding;


#import "CADEventPredicate.h"

@interface CADCalendarItemsWithExternalIdentifierPredicate : CADEventPredicate <NSSecureCoding>



@property (readonly, nonatomic) int entityType; // ivar: _entityType
@property (readonly, nonatomic) NSString *externalIdentifier; // ivar: _externalIdentifier


+(BOOL)supportsSecureCoding;
-(id)copyMatchingItemsWithDatabase:(struct CalDatabase *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExternalIdentifier:(id)arg0 ;
-(id)initWithExternalIdentifier:(id)arg0 entityType:(int)arg1 ;
-(id)predicateFormat;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif