// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMMUTABLEREPORTCONTEXT_H
#define HMMUTABLEREPORTCONTEXT_H

@class NSString, NSData;


#import "HMReportContext.h"

@interface HMMutableReportContext : HMReportContext

@property (retain, nonatomic) NSString *reportDomain;
@property (nonatomic) CGFloat reportTimeout;
@property (retain, nonatomic) NSData *requestInfo;


+(id)reportContextWithDomain:(id)arg0 requestInfo:(id)arg1 ;
+(id)reportContextWithDomain:(id)arg0 requestInfo:(id)arg1 timeout:(CGFloat)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithReportDomain:(id)arg0 requestInfo:(id)arg1 timeout:(CGFloat)arg2 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif