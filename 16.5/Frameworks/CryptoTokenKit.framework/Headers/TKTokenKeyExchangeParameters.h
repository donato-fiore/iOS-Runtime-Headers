// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TKTOKENKEYEXCHANGEPARAMETERS_H
#define TKTOKENKEYEXCHANGEPARAMETERS_H

@class NSData;

#import <Foundation/Foundation.h>


@interface TKTokenKeyExchangeParameters : NSObject

@property (readonly) NSInteger requestedSize; // ivar: _requestedSize
@property (readonly, copy) NSData *sharedInfo; // ivar: _sharedInfo


-(id)initWithParameters:(id)arg0 ;


@end


#endif