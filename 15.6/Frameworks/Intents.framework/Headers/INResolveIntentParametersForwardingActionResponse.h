// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INRESOLVEINTENTPARAMETERSFORWARDINGACTIONRESPONSE_H
#define INRESOLVEINTENTPARAMETERSFORWARDINGACTIONRESPONSE_H

@class NSDictionary;


#import "INIntentForwardingActionResponse.h"
#import "INIntent.h"

@interface INResolveIntentParametersForwardingActionResponse : INIntentForwardingActionResponse

@property (readonly, nonatomic) NSDictionary *parameterResolutionResults; // ivar: _parameterResolutionResults
@property (readonly, nonatomic, getter=isSuccess) BOOL success; // ivar: _success
@property (readonly, nonatomic) INIntent *updatedIntent; // ivar: _updatedIntent


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSuccess:(BOOL)arg0 updatedIntent:(id)arg1 parameterResolutionResults:(id)arg2 error:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif