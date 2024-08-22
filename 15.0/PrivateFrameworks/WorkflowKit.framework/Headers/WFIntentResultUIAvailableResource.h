// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFINTENTRESULTUIAVAILABLERESOURCE_H
#define WFINTENTRESULTUIAVAILABLERESOURCE_H

@class INIntentDescriptor;


#import "WFResource.h"

@interface WFIntentResultUIAvailableResource : WFResource

@property (readonly, nonatomic) BOOL hasSuccessResponseWithDialog; // ivar: _hasSuccessResponseWithDialog
@property (readonly, nonatomic) INIntentDescriptor *resolvedIntentDescriptor; // ivar: _resolvedIntentDescriptor


+(BOOL)mustBeAvailableForDisplay;
-(id)initWithDefinition:(id)arg0 ;
-(id)initWithDefinition:(id)arg0 resolvedIntentDescriptor:(id)arg1 hasSuccessResponseWithDialog:(BOOL)arg2 ;
-(void)refreshAvailability;


@end


#endif