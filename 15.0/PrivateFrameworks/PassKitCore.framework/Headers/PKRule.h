// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKRULE_H
#define PKRULE_H

@class NSString, NSPredicate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKOSVersionRequirementRange.h"

@interface PKRule : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) PKOSVersionRequirementRange *osVersionRequirementRange; // ivar: _osVersionRequirementRange
@property (readonly, nonatomic) NSPredicate *predicate; // ivar: _predicate
@property (retain, nonatomic) NSString *predicateFormat; // ivar: _predicateFormat


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 predicateFormat:(id)arg1 osVersionRequirementRange:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)parsePredicateFormat;


@end


#endif