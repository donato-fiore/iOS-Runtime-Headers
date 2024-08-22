// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INGETINTENTPARAMETEROPTIONSFORWARDINGACTIONRESPONSE_H
#define INGETINTENTPARAMETEROPTIONSFORWARDINGACTIONRESPONSE_H

@class NSData;


#import "INIntentForwardingActionResponse.h"

@interface INGetIntentParameterOptionsForwardingActionResponse : INIntentForwardingActionResponse

@property (readonly, nonatomic) NSData *archivedObjectCollection; // ivar: _archivedObjectCollection


+(BOOL)supportsSecureCoding;
-(id)initWithArchivedObjectCollection:(id)arg0 error:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif