// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef XRMOBILEAGENTINLINESTOP_H
#define XRMOBILEAGENTINLINESTOP_H

@class NSString;
@protocol XRMobileAgentStop;

#import <Foundation/Foundation.h>


@interface XRMobileAgentInlineStop : NSObject <XRMobileAgentStop>



@property (readonly, nonatomic) int agentStopDiagnosticsTypeCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)receiveMobileAgent:(id)arg0 ;


@end


#endif