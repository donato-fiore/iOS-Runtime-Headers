// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INRESOLVEINTENTPARAMETERSFORWARDINGACTION_H
#define INRESOLVEINTENTPARAMETERSFORWARDINGACTION_H

@class NSArray;


#import "INIntentForwardingAction.h"

@interface INResolveIntentParametersForwardingAction : INIntentForwardingAction

@property (readonly, nonatomic) NSArray *parameterNames; // ivar: _parameterNames
@property (readonly, nonatomic) BOOL resolvesAllParameters; // ivar: _resolvesAllParameters


+(BOOL)supportsSecureCoding;
+(Class)responseClass;
-(BOOL)executeRemotelyWithVendorRemote:(id)arg0 completionHandler:(id)arg1 ;
-(id)_completionHandlerForMultipleParametersWithActionCompletionHandler:(SEL)arg0 ;
-(id)_completionHandlerForSingleParameterNamed:(SEL)arg0 withActionCompletionHandler:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIntent:(id)arg0 parameterName:(id)arg1 ;
-(id)initWithIntent:(id)arg0 parameterNames:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeLocallyWithIntentDeliverer:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif