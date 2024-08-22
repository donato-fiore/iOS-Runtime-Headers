// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IKSERVICECONTEXT_H
#define IKSERVICECONTEXT_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "IKViewElement.h"

@interface IKServiceContext : NSObject

@property (readonly, copy, nonatomic) NSDictionary *contextDictionary; // ivar: _contextDictionary
@property (readonly, nonatomic) IKViewElement *element; // ivar: _element


-(id)initWithContextDictionary:(id)arg0 element:(id)arg1 ;


@end


#endif