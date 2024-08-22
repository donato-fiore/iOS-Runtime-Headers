// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MEMESSAGERECIPIENTS_H
#define MEMESSAGERECIPIENTS_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MEMessageRecipients : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *allRecipients;
@property (readonly, copy, nonatomic) NSArray *bcc; // ivar: _bcc
@property (readonly, copy, nonatomic) NSArray *cc; // ivar: _cc
@property (readonly, copy, nonatomic) NSArray *replyTo; // ivar: _replyTo
@property (readonly, copy, nonatomic) NSArray *to; // ivar: _to


+(BOOL)supportsSecureCoding;
+(id)emailAddressesForEmailAddressStrings:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStringsTo:(id)arg0 cc:(id)arg1 bcc:(id)arg2 replyTo:(id)arg3 ;
-(id)initWithTo:(id)arg0 cc:(id)arg1 bcc:(id)arg2 replyTo:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif