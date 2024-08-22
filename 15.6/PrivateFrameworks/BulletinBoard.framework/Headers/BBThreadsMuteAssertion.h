// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BBTHREADSMUTEASSERTION_H
#define BBTHREADSMUTEASSERTION_H

@class NSMutableDictionary, NSDictionary, NSSet;


#import "BBMuteAssertion.h"

@interface BBThreadsMuteAssertion : BBMuteAssertion {
    NSMutableDictionary *_mutableExpirationDateByThreadID;
}


@property (readonly, copy, nonatomic) NSDictionary *expirationDateByThreadID;
@property (readonly, copy, nonatomic) NSSet *threadIDs;


+(BOOL)supportsSecureCoding;
+(id)threadsMuteAssertion;
-(BOOL)isActiveForThreadIdentifier:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_init;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getNextExpirationDate:(*id)arg0 wasPurged:(*BOOL)arg1 ;
-(void)setMutedUntilDate:(id)arg0 forThreadIdentifier:(id)arg1 ;
-(void)setUnmutedForThreadIdentifier:(id)arg0 ;


@end


#endif