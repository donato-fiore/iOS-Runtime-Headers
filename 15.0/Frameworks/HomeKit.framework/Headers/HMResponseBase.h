// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMRESPONSEBASE_H
#define HMRESPONSEBASE_H

@class NSError;
@protocol NSCopying><NSObject;

#import <Foundation/Foundation.h>

#import "HMRequestBase.h"

@interface HMResponseBase : NSObject

@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) HMRequestBase *request; // ivar: _request
@property (readonly, nonatomic) NSObject<NSCopying><NSObject> *value; // ivar: _value


-(id)initWithRequest:(id)arg0 error:(id)arg1 ;
-(id)initWithRequest:(id)arg0 value:(id)arg1 error:(id)arg2 ;


@end


#endif