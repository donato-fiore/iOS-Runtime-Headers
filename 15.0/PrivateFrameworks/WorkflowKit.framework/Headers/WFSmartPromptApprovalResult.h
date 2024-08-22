// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSMARTPROMPTAPPROVALRESULT_H
#define WFSMARTPROMPTAPPROVALRESULT_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFSmartPromptApprovalResult : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *actionUUID; // ivar: _actionUUID
@property (readonly, nonatomic) NSArray *allowedStates; // ivar: _allowedStates
@property (readonly, nonatomic) NSArray *deniedStates; // ivar: _deniedStates
@property (readonly, nonatomic) NSArray *restrictedStates; // ivar: _restrictedStates
@property (readonly, nonatomic) NSArray *undefinedStates; // ivar: _undefinedStates


+(BOOL)supportsSecureCoding;
-(id)initWithActionUUID:(id)arg0 ;
-(id)initWithAllowedStates:(id)arg0 deniedStates:(id)arg1 undefinedStates:(id)arg2 restrictedStates:(id)arg3 actionUUID:(id)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(id)resultByAddingDatabaseResult:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif