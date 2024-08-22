// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFUSERREPORTFEEDBACK_H
#define SFUSERREPORTFEEDBACK_H

@protocol NSCopying;


#import "SFFeedback.h"
#import "SFCardSection.h"
#import "SFSearchResult.h"
#import "SFPunchout.h"

@interface SFUserReportFeedback : SFFeedback <NSCopying>



@property (retain, nonatomic) SFCardSection *cardSection; // ivar: _cardSection
@property (retain, nonatomic) SFSearchResult *result; // ivar: _result
@property (retain, nonatomic) SFPunchout *userSelection; // ivar: _userSelection


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSelection:(id)arg0 result:(id)arg1 cardSection:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif