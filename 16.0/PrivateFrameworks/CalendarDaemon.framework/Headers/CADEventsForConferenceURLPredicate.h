// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CADEVENTSFORCONFERENCEURLPREDICATE_H
#define CADEVENTSFORCONFERENCEURLPREDICATE_H

@class NSString;
@protocol NSSecureCoding;


#import "EKPredicate.h"

@interface CADEventsForConferenceURLPredicate : EKPredicate <NSSecureCoding>



@property (nonatomic) NSInteger limit; // ivar: _limit
@property (copy, nonatomic) NSString *urlString; // ivar: _urlString


+(BOOL)supportsSecureCoding;
-(?)copyMatchingItemsWithDatabase;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)defaultPropertiesToLoad;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 limit:(NSInteger)arg1 ;
-(id)predicateFormat;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif