// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSGPROACTIVETRIGGER_H
#define PSGPROACTIVETRIGGER_H

@class NSDictionary, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PSGProactiveTrigger : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSDictionary *triggerAttributes; // ivar: _triggerAttributes
@property (readonly, nonatomic) NSString *triggerCategory; // ivar: _triggerCategory
@property (readonly, nonatomic) NSUInteger triggerSourceType; // ivar: _triggerSourceType


+(BOOL)supportsSecureCoding;
+(id)getGivenNameQualifier:(id)arg0 ;
+(id)getSearchTerm:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTrigger:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSourceType:(NSUInteger)arg0 category:(id)arg1 attributes:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif