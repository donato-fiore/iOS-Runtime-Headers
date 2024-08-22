// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEFILTERDATAVERDICT_H
#define NEFILTERDATAVERDICT_H

@protocol NSSecureCoding, NSCopying;


#import "NEFilterVerdict.h"

@interface NEFilterDataVerdict : NEFilterVerdict <NSSecureCoding, NSCopying>



@property NSUInteger passBytes; // ivar: _passBytes
@property NSUInteger peekBytes; // ivar: _peekBytes
@property NSInteger statisticsReportFrequency; // ivar: _statisticsReportFrequency


+(BOOL)supportsSecureCoding;
+(id)allowVerdict;
+(id)dataVerdictWithPassBytes:(NSUInteger)arg0 peekBytes:(NSUInteger)arg1 ;
+(id)dropVerdict;
+(id)needRulesVerdict;
+(id)pauseVerdict;
+(id)remediateVerdictWithRemediationURLMapKey:(id)arg0 remediationButtonTextMapKey:(id)arg1 ;
-(NSInteger)filterAction;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif