// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFGRANULARREMOTESERVERACCESSRESOURCEPERWORKFLOWSTATEMIGRATEDENTRY_H
#define WFGRANULARREMOTESERVERACCESSRESOURCEPERWORKFLOWSTATEMIGRATEDENTRY_H

@class NSNumber, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFGranularRemoteServerAccessResourcePerWorkflowStateMigratedEntry : NSObject <NSSecureCoding>

 {
    NSNumber *authorized;
    NSString *host;
}




+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif