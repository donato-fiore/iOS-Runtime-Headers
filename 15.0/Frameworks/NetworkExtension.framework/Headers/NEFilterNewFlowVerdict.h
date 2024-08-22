// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEFILTERNEWFLOWVERDICT_H
#define NEFILTERNEWFLOWVERDICT_H

@protocol NSSecureCoding, NSCopying;


#import "NEFilterVerdict.h"

@interface NEFilterNewFlowVerdict : NEFilterVerdict <NSSecureCoding, NSCopying>



@property BOOL filterInbound; // ivar: _filterInbound
@property BOOL filterOutbound; // ivar: _filterOutbound
@property NSUInteger peekInboundBytes; // ivar: _peekInboundBytes
@property NSUInteger peekOutboundBytes; // ivar: _peekOutboundBytes
@property NSInteger statisticsReportFrequency; // ivar: _statisticsReportFrequency


+(BOOL)supportsSecureCoding;
+(id)URLAppendStringVerdictWithMapKey:(id)arg0 ;
+(id)allowVerdict;
+(id)dropVerdict;
+(id)filterDataVerdictWithFilterInbound:(BOOL)arg0 peekInboundBytes:(NSUInteger)arg1 filterOutbound:(BOOL)arg2 peekOutboundBytes:(NSUInteger)arg3 ;
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