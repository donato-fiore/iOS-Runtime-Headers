// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFGRANULARHEALTHKITACCESSRESOURCEPERWORKFLOWSTATEMIGRATEDENTRY_H
#define WFGRANULARHEALTHKITACCESSRESOURCEPERWORKFLOWSTATEMIGRATEDENTRY_H

@class NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFGranularHealthKitAccessResourcePerWorkflowStateMigratedEntry : NSObject <NSSecureCoding>

 {
    NSNumber *authorized;
}




+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif