// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCOERCIONCONTEXT_H
#define WFCOERCIONCONTEXT_H

@class WFType;

#import <Foundation/Foundation.h>

#import "WFCoercionOptions.h"

@interface WFCoercionContext : NSObject

@property (readonly, nonatomic) WFCoercionOptions *options; // ivar: _options
@property (readonly, nonatomic) WFType *requestedType; // ivar: _requestedType


-(id)initWithRequestedType:(id)arg0 options:(id)arg1 ;


@end


#endif