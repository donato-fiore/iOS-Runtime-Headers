// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKIDIRECTINVOCATIONPAYLOAD_H
#define SKIDIRECTINVOCATIONPAYLOAD_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface SKIDirectInvocationPayload : NSObject

@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSDictionary *userData; // ivar: _userData


-(id)initWithIdentifier:(id)arg0 ;


@end


#endif