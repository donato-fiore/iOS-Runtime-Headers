// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFUSERREPORTFEEDBACK_H
#define SFUSERREPORTFEEDBACK_H

@class NSArray, NSString;
@protocol NSCopying;


#import "SFFeedback.h"
#import "SFCardSection.h"
#import "SFSearchResult.h"
#import "SFPunchout.h"

@interface SFUserReportFeedback : SFFeedback <NSCopying>



@property (retain, nonatomic) SFCardSection *cardSection; // ivar: _cardSection
@property (nonatomic) int reportType; // ivar: _reportType
@property (retain, nonatomic) SFSearchResult *result; // ivar: _result
@property (retain, nonatomic) NSArray *sections; // ivar: _sections
@property (retain, nonatomic) NSString *uploadedDataIdentifier; // ivar: _uploadedDataIdentifier
@property (retain, nonatomic) SFPunchout *userSelection; // ivar: _userSelection


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSelection:(id)arg0 result:(id)arg1 cardSection:(id)arg2 ;
-(id)initWithSelection:(id)arg0 result:(id)arg1 cardSection:(id)arg2 resultSections:(id)arg3 uploadedDataIdentifier:(id)arg4 userReportRequestType:(int)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif