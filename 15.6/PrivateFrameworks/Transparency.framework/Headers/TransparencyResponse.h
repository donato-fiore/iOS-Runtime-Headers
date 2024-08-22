// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRANSPARENCYRESPONSE_H
#define TRANSPARENCYRESPONSE_H

@class NSData, NSDictionary;

#import <Foundation/Foundation.h>

#import "TransparencyNetworkRequest.h"

@interface TransparencyResponse : NSObject

@property (retain) NSData *data; // ivar: _data
@property (retain) NSDictionary *metadata; // ivar: _metadata
@property (retain) TransparencyNetworkRequest *request; // ivar: _request


-(id)initWithRequest:(id)arg0 responseData:(id)arg1 metadata:(id)arg2 ;
-(id)serverHint;


@end


#endif