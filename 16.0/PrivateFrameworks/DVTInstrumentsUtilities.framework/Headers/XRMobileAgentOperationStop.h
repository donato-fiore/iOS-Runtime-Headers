// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef XRMOBILEAGENTOPERATIONSTOP_H
#define XRMOBILEAGENTOPERATIONSTOP_H

@class NSString;
@protocol XRMobileAgentStop;

#import <Foundation/Foundation.h>


@interface XRMobileAgentOperationStop : NSObject <XRMobileAgentStop>



@property (readonly, nonatomic) int agentStopDiagnosticsTypeCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)receiveMobileAgent:(id)arg0 ;


@end


#endif