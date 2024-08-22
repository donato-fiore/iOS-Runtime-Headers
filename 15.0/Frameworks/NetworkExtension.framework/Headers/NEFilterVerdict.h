// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEFILTERVERDICT_H
#define NEFILTERVERDICT_H

@class NSString;
@protocol NEPrettyDescription, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface NEFilterVerdict : NSObject <NEPrettyDescription, NSSecureCoding, NSCopying>



@property BOOL drop; // ivar: _drop
@property (readonly) NSInteger filterAction;
@property BOOL needRules; // ivar: _needRules
@property BOOL pause; // ivar: _pause
@property BOOL remediate; // ivar: _remediate
@property (retain) NSString *remediationButtonTextMapKey; // ivar: _remediationButtonTextMapKey
@property (retain) NSString *remediationURLMapKey; // ivar: _remediationURLMapKey
@property BOOL shouldReport; // ivar: _shouldReport
@property BOOL urlAppendString; // ivar: _urlAppendString
@property (retain) NSString *urlAppendStringMapKey; // ivar: _urlAppendStringMapKey


+(BOOL)supportsSecureCoding;
+(id)statisticsReportFrequencyToString:(NSInteger)arg0 ;
+(unsigned int)statisticsReportFrequencyToMilliseconds:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDrop:(BOOL)arg0 remediate:(BOOL)arg1 ;
-(id)initWithPause:(BOOL)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif