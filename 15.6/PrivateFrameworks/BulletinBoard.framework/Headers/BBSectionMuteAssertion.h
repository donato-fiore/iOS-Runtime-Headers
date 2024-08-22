// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BBSECTIONMUTEASSERTION_H
#define BBSECTIONMUTEASSERTION_H

@class NSDate;


#import "BBMuteAssertion.h"

@interface BBSectionMuteAssertion : BBMuteAssertion

@property (readonly, nonatomic) NSDate *expirationDate; // ivar: _expirationDate


+(BOOL)supportsSecureCoding;
+(id)sectionMuteAssertionUntilDate:(id)arg0 ;
-(BOOL)isActiveForThreadIdentifier:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithExpirationDate:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getNextExpirationDate:(*id)arg0 wasPurged:(*BOOL)arg1 ;


@end


#endif