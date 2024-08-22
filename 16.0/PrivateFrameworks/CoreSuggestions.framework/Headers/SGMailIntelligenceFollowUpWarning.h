// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGMAILINTELLIGENCEFOLLOWUPWARNING_H
#define SGMAILINTELLIGENCEFOLLOWUPWARNING_H

@class NSString, NSDate, NSNumber;


#import "SGMailIntelligenceWarning.h"

@interface SGMailIntelligenceFollowUpWarning : SGMailIntelligenceWarning

@property (readonly, nonatomic) NSString *appleMailMessageId; // ivar: _appleMailMessageId
@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) NSString *endDateCore; // ivar: _endDateCore
@property (readonly, nonatomic) NSString *globalMessageId;
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly, nonatomic) NSString *startDateCore; // ivar: _startDateCore
@property (retain, nonatomic) NSNumber *type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAppleMailMessageId:(id)arg0 snippet:(id)arg1 core:(id)arg2 score:(id)arg3 startDate:(id)arg4 startDateCore:(id)arg5 endDate:(id)arg6 endDateCore:(id)arg7 ;
-(id)initWithAppleMailMessageId:(id)arg0 snippet:(id)arg1 core:(id)arg2 signature:(id)arg3 detectedLanguage:(id)arg4 isIncomingMessage:(BOOL)arg5 score:(id)arg6 startDate:(id)arg7 startDateCore:(id)arg8 endDate:(id)arg9 endDateCore:(id)arg10 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNSData:(id)arg0 ;
-(id)initWithNSDictionary:(id)arg0 ;
-(id)initWithString:(id)arg0 ;
-(id)toLightJson;
-(id)toLightNSData;
-(id)toLightNSDictionary;
-(unsigned char)warningType;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif