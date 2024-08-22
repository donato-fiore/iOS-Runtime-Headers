// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMREPORTCONTEXT_H
#define HMREPORTCONTEXT_H

@class NSString, NSData;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface HMReportContext : NSObject <NSCopying, NSMutableCopying>



@property (readonly, nonatomic) NSString *reportDomain; // ivar: _reportDomain
@property (nonatomic) CGFloat reportTimeout; // ivar: _reportTimeout
@property (readonly, nonatomic) NSData *requestInfo; // ivar: _requestInfo


+(id)reportContextWithDomain:(id)arg0 requestInfo:(id)arg1 timeout:(CGFloat)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithReportDomain:(id)arg0 requestInfo:(id)arg1 timeout:(CGFloat)arg2 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif