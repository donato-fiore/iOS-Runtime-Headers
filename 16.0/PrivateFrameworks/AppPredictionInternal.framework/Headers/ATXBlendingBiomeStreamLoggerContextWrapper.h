// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXBLENDINGBIOMESTREAMLOGGERCONTEXTWRAPPER_H
#define ATXBLENDINGBIOMESTREAMLOGGERCONTEXTWRAPPER_H

@class BMStoreEvent;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ATXBlendingBiomeStreamLoggerContext.h"

@interface ATXBlendingBiomeStreamLoggerContextWrapper : NSObject <NSSecureCoding>



@property (retain, nonatomic) BMStoreEvent *event; // ivar: _event
@property (retain, nonatomic) ATXBlendingBiomeStreamLoggerContext *loggerContext; // ivar: _loggerContext


+(BOOL)supportsSecureCoding;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXBlendingBiomeStreamLoggerContextWrapper:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEvent:(id)arg0 loggerContext:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif