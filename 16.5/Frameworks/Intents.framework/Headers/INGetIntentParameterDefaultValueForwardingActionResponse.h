// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INGETINTENTPARAMETERDEFAULTVALUEFORWARDINGACTIONRESPONSE_H
#define INGETINTENTPARAMETERDEFAULTVALUEFORWARDINGACTIONRESPONSE_H

@class NSData;


#import "INIntentForwardingActionResponse.h"

@interface INGetIntentParameterDefaultValueForwardingActionResponse : INIntentForwardingActionResponse

@property (readonly, nonatomic) NSData *archivedDefaultValue; // ivar: _archivedDefaultValue


+(BOOL)supportsSecureCoding;
-(id)initWithArchivedDefaultValue:(id)arg0 error:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif