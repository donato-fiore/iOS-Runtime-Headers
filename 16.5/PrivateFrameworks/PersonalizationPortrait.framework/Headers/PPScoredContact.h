// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPSCOREDCONTACT_H
#define PPSCOREDCONTACT_H

@class NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PPContact.h"

@interface PPScoredContact : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) PPContact *contact; // ivar: _contact
@property (readonly, nonatomic) unsigned char flags; // ivar: _flags
@property (readonly, nonatomic) CGFloat score; // ivar: _score
@property (readonly, nonatomic) NSArray *scoredEmailAddresses; // ivar: _scoredEmailAddresses
@property (readonly, nonatomic) NSArray *scoredPhoneNumbers; // ivar: _scoredPhoneNumbers
@property (readonly, nonatomic) NSArray *scoredPostalAddresses; // ivar: _scoredPostalAddresses
@property (readonly, nonatomic) NSArray *scoredSocialProfiles; // ivar: _scoredSocialProfiles


+(BOOL)supportsSecureCoding;
+(id)scoredContactWithContact:(id)arg0 scoredPhoneNumbers:(id)arg1 scoredEmailAddresses:(id)arg2 scoredSocialProfiles:(id)arg3 scoredPostalAddresses:(id)arg4 score:(CGFloat)arg5 flags:(unsigned char)arg6 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToScoredContact:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSInteger)reverseCompare:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContact:(id)arg0 scoredPhoneNumbers:(id)arg1 scoredEmailAddresses:(id)arg2 scoredSocialProfiles:(id)arg3 scoredPostalAddresses:(id)arg4 score:(CGFloat)arg5 flags:(unsigned char)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif