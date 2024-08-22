// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IKJSARRAYBUFFERSTORE_H
#define IKJSARRAYBUFFERSTORE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "IKAppContext.h"

@interface IKJSArrayBufferStore : NSObject

@property (readonly, weak, nonatomic) IKAppContext *appContext; // ivar: _appContext
@property (readonly, nonatomic) NSMutableDictionary *bufferStorage; // ivar: _bufferStorage


-(id)arrayBufferForData:(id)arg0 ;
-(id)initWithAppContext:(id)arg0 ;


@end


#endif