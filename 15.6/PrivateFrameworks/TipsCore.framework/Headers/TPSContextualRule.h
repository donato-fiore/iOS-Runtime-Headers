// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSCONTEXTUALRULE_H
#define TPSCONTEXTUALRULE_H

@class NSArray, NSString, NSDate;


#import "TPSSerializableObject.h"

@interface TPSContextualRule : TPSSerializableObject

@property (copy, nonatomic) NSArray *eventIdentifiers; // ivar: _eventIdentifiers
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSDate *matchedDate; // ivar: _matchedDate


+(BOOL)supportsSecureCoding;
+(id)eventsForRuleDictionary:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)restartTracking;


@end


#endif