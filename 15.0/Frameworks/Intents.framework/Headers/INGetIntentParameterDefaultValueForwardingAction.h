// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INGETINTENTPARAMETERDEFAULTVALUEFORWARDINGACTION_H
#define INGETINTENTPARAMETERDEFAULTVALUEFORWARDINGACTION_H

@class NSString;


#import "INIntentForwardingAction.h"

@interface INGetIntentParameterDefaultValueForwardingAction : INIntentForwardingAction

@property (readonly, copy, nonatomic) NSString *parameterName; // ivar: _parameterName


+(BOOL)supportsSecureCoding;
+(Class)responseClass;
-(BOOL)executeRemotelyWithVendorRemote:(id)arg0 completionHandler:(id)arg1 ;
-(id)_completionHandlerWithActionCompletionHandler:(SEL)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIntent:(id)arg0 parameterName:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeLocallyWithIntentDeliverer:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif