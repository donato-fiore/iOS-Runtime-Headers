// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGMAILINTELLIGENCESALIENCY_H
#define SGMAILINTELLIGENCESALIENCY_H

@class NSDate, NSNumber, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SGMailIntelligenceSaliency : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, nonatomic) NSNumber *decayedScore;
@property (nonatomic) NSInteger gteSaliency; // ivar: _gteSaliency
@property (nonatomic) BOOL isCounted; // ivar: _isCounted
@property (readonly, nonatomic) BOOL isSalient; // ivar: _isSalient
@property (readonly, nonatomic) NSString *mailboxId; // ivar: _mailboxId
@property (readonly, nonatomic) NSString *messageId; // ivar: _messageId
@property (readonly, nonatomic) NSNumber *score; // ivar: _score


+(BOOL)supportsSecureCoding;
+(id)decayScore:(id)arg0 creationTime:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMessageId:(id)arg0 mailboxId:(id)arg1 score:(id)arg2 isSalient:(BOOL)arg3 creationDate:(id)arg4 ;
-(id)initWithMessageId:(id)arg0 mailboxId:(id)arg1 score:(id)arg2 isSalient:(BOOL)arg3 gteSaliency:(NSInteger)arg4 isCounted:(BOOL)arg5 creationDate:(id)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif