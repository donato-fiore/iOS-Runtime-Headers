// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNACTIONSUMMARY_H
#define LNACTIONSUMMARY_H

@class NSURL, NSArray, NSString;
@protocol NSCopying, NSSecureCoding;


#import "LNActionConfiguration.h"
#import "LNActionSummaryString.h"

@interface LNActionSummary : LNActionConfiguration <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSURL *bundleURL; // ivar: _bundleURL
@property (readonly, nonatomic) NSArray *otherParameterIdentifiers; // ivar: _otherParameterIdentifiers
@property (readonly, nonatomic) LNActionSummaryString *summaryString; // ivar: _summaryString
@property (readonly, nonatomic) NSString *table; // ivar: _table


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)actionConfigurationByEvaluatingAction:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSummaryString:(id)arg0 bundleURL:(id)arg1 table:(id)arg2 otherParameterIdentifiers:(id)arg3 ;
-(id)localizedFormatStringForLocaleIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif