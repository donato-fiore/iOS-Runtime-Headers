// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIVIEWSERVICECONTROLLEROPERATORCREATERESULT_H
#define _UIVIEWSERVICECONTROLLEROPERATORCREATERESULT_H

@class BSMachPortSendRight, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_UIHostedWindowHostingHandle.h"

@interface _UIViewServiceControllerOperatorCreateResult : NSObject <NSSecureCoding>



@property (retain, nonatomic) BSMachPortSendRight *accessibilityServerPort; // ivar: _accessibilityServerPort
@property (nonatomic) NSInteger preferredStatusBarStyle; // ivar: _preferredStatusBarStyle
@property (nonatomic) int preferredStatusBarVisibility; // ivar: _preferredStatusBarVisibility
@property (retain, nonatomic) _UIHostedWindowHostingHandle *serviceWindowHostingHandle; // ivar: _serviceWindowHostingHandle
@property (copy, nonatomic) NSArray *supportedInterfaceOrientations; // ivar: _supportedInterfaceOrientations


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif