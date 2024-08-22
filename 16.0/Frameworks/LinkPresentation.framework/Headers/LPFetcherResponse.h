// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LPFETCHERRESPONSE_H
#define LPFETCHERRESPONSE_H


#import <Foundation/Foundation.h>


@interface LPFetcherResponse : NSObject

@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (readonly, retain, nonatomic) id *userData; // ivar: _userData


-(id)initWithState:(NSInteger)arg0 fetcher:(id)arg1 ;


@end


#endif